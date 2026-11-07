// rea decompile_all
// name: SADatabase::insertRecords:
// address: 0x10071ebf4
// body: available
// range: 0x10071ebf4-0x10071eeb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10071eeb0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

bool SADatabase::insertRecords_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  int iVar2;
  ID IVar3;
  sqlite3_stmt *pStmt;
  ID IVar4;
  char *pcVar5;
  unsigned_long_long uVar6;
  ID IVar7;
  ID self;
  long lVar8;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar3 = objc_stub::count(param_3);
  if ((IVar3 != 0) && (bVar1 = databaseCheck(param_1), bVar1 != 0)) {
    IVar3 = objc_stub::count(param_3);
    bVar1 = preCheckForInsertRecords_(param_1,IVar3);
    if ((bVar1 != 0) &&
       (iVar2 = _sqlite3_exec(*(sqlite3 **)(param_1 + 8),"BEGIN TRANSACTION",(callback *)0x0,
                              (void *)0x0,(char **)0x0), iVar2 == 0)) {
      IVar3 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,
                         &cf_INSERTINTOdataCache_type_content____values_______);
      pStmt = dbCacheStmt_(param_1,IVar3);
      if (pStmt == (sqlite3_stmt *)0x0) {
        bVar1 = 0;
      }
      else {
        uStack_108 = 0;
        local_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        lStack_128 = 0;
        local_130 = 0;
        uStack_118 = 0;
        local_120 = (long *)0x0;
        IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                          (param_3,&local_130,auStack_f0,0x10);
        if (IVar3 == 0) {
          pcVar5 = "COMMIT";
        }
        else {
          lVar8 = *local_120;
          do {
            IVar7 = 0;
            do {
              if (*local_120 != lVar8) {
                _objc_enumerationMutation(param_3);
              }
              self = *(ID *)(lStack_128 + IVar7 * 8);
              IVar4 = objc_stub::isValid(self);
              if ((int)IVar4 == 0) {
LAB_10071ee4c:
                pcVar5 = "ROLLBACK";
                goto LAB_10071ee68;
              }
              IVar4 = objc_stub::type(self);
              _objc_retainAutorelease();
              pcVar5 = (char *)objc_stub::UTF8String(IVar4);
              _sqlite3_bind_text((sqlite3_stmt *)pStmt,1,pcVar5,-1,(void *)0xffffffffffffffff);
              IVar4 = objc_stub::content(self);
              _objc_retainAutorelease();
              pcVar5 = (char *)objc_stub::UTF8String(IVar4);
              _sqlite3_bind_text((sqlite3_stmt *)pStmt,2,pcVar5,-1,(void *)0xffffffffffffffff);
              IVar4 = objc_stub::isInstantEvent(self);
              _sqlite3_bind_int((sqlite3_stmt *)pStmt,3,(int)IVar4);
              iVar2 = _sqlite3_step((sqlite3_stmt *)pStmt);
              if (iVar2 != 0x65) goto LAB_10071ee4c;
              _sqlite3_reset((sqlite3_stmt *)pStmt);
              IVar7 = IVar7 + 1;
            } while (IVar3 != IVar7);
            IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                              (param_3,&local_130,auStack_f0,0x10);
            pcVar5 = "COMMIT";
          } while (IVar3 != 0);
        }
LAB_10071ee68:
        iVar2 = _sqlite3_exec(*(sqlite3 **)(param_1 + 8),pcVar5,(callback *)0x0,(void *)0x0,
                              (char **)0x0);
        bVar1 = (bool)(iVar2 == 0);
        uVar6 = messagesCount(param_1);
        setCount_(param_1,uVar6);
      }
      goto LAB_10071ec84;
    }
  }
  bVar1 = 0;
LAB_10071ec84:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return bVar1;
}

