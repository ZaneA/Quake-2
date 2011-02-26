;;; Quake 2 high level API

;; Print functions

(define q2:print (foreign-lambda* void ((c-string str))
 "gi.cprintf(NULL, PRINT_HIGH, \"%s\", str);"))

(define q2:chat (foreign-lambda* void ((c-string str))
 "gi.cprintf(NULL, PRINT_CHAT, \"%s\", str);"))


;; Ent functions

(define current-ent
  (foreign-lambda c-pointer "Chicken_GetEnt"))

(define set-current-ent
  (foreign-lambda void "Chicken_SetEnt" c-pointer))

(define (q2:with-entity ent proc)
  (set-current-ent ent)
  (proc))


(define q2:get-player-by-name (foreign-lambda* c-pointer ((c-string name))
 "int i;
  for (i = 0; i < globals.num_edicts; i++)
  {
      if (g_edicts[i].client && Q_stricmp(g_edicts[i].client->pers.netname, name) == 0)
          C_return(&g_edicts[i]);
  }
  C_return(NULL);"))

(define q2:closest-player-range
  (foreign-lambda float "PlayersRangeFromSpot" c-pointer))

(define q2:_get-ent-by-trace
  (foreign-lambda c-pointer "Weapon_Trace_Fire" c-pointer))

(define (q2:get-ent-by-trace)
  (q2:_get-ent-by-trace (current-ent)))


(define q2:_move-entity (foreign-lambda* void ((c-pointer ent) (float x) (float y) (float z))
 "((edict_t*)ent)->s.origin[0] = x;
  ((edict_t*)ent)->s.origin[1] = y;
  ((edict_t*)ent)->s.origin[2] = z;"))

(define (q2:move-entity x y z)
  (q2:_move-entity (current-ent) x y z))

(define q2:_get-origin (foreign-lambda* c-string ((c-pointer ent))
 "C_return(vtos(((edict_t*)ent)->s.origin));"))

(define (q2:get-origin)
  (q2:_get-origin (current-ent)))


;; Item functions

(define q2:find-item (foreign-lambda* c-pointer ((c-string name))
 "C_return(FindItem(name));"))

(define q2:_spawn-item
  (foreign-lambda void "SpawnItem" c-pointer c-pointer))

(define (q2:spawn-item name)
  (q2:_spawn-item (current-ent) (q2:find-item name)))


;; Weapon functions

(define q2:_switch-weapon
  (foreign-lambda void "Use_Weapon" c-pointer c-pointer))

(define (q2:switch-weapon name)
  (q2:_switch-weapon (current-ent) (q2:find-item name)))

(define q2:fire-blaster
  (foreign-lambda void "Weapon_Blaster_Fire" c-pointer))

(define q2:fire-machinegun
  (foreign-lambda void "Machinegun_Fire" c-pointer))

(define q2:fire-railgun
  (foreign-lambda void "weapon_railgun_fire" c-pointer))


(current-output-port
 (make-output-port
  (lambda (string)
    (q2:print string))
  (lambda ()
    #t)))

(return-to-host)
