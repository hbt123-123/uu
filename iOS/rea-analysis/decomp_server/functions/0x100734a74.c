// rea decompile_all
// name: SAIDMappingInterceptor::identifyTrackFromH5WithEventObject:
// address: 0x100734a74
// body: available
// range: 0x100734a74-0x100734dcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SAIDMappingInterceptor::identifyTrackFromH5WithEventObject_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  ID self;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID self_00;
  undefined *puStack_c8;
  undefined8 local_c0;
  code *local_b8;
  undefined *puStack_b0;
  ID local_a8;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  ID local_80;
  ID local_78;
  
  IVar2 = objc_stub::identities(param_3);
  puVar1 = PTR___NSConcreteStackBlock_100995490;
  local_a0 = PTR___NSConcreteStackBlock_100995490;
  local_98 = 0xc2000000;
  local_90 = FUN_100734dcc;
  puStack_88 = &DAT_1009e8428;
  local_80 = param_1;
  local_78 = param_3;
  self = objc_stub::distinctId(param_3);
  if (IVar2 == 0) {
    IVar2 = identifier(param_1);
    IVar2 = objc_stub::loginIDKey(IVar2);
    (*local_90)(&local_a0,IVar2,self);
  }
  else {
    IVar3 = identifier(param_1);
    IVar3 = objc_stub::loginIDKey(IVar3);
    IVar3 = objc_stub::objectForKeyedSubscript_(IVar2,IVar3);
    IVar4 = objc_stub::componentsSeparatedByString_(self,&cf__);
    IVar4 = objc_stub::mutableCopy(IVar4);
    IVar5 = objc_stub::firstObject(IVar4);
    objc_stub::removeObjectAtIndex_(IVar4,0);
    IVar4 = objc_stub::componentsJoinedByString_(IVar4,&cf__);
    puStack_c8 = puVar1;
    local_c0 = 0xc2000000;
    local_b8 = FUN_100734ef8;
    puStack_b0 = &DAT_1009e8458;
    local_a8 = self;
    self_00 = objc_stub::keysOfEntriesPassingTest_(IVar2,&puStack_c8);
    if (IVar3 == 0) {
      IVar2 = objc_stub::objectForKeyedSubscript_(IVar2,IVar5);
      IVar2 = objc_stub::isEqualToString_(IVar2,IVar4);
      if ((int)IVar2 == 0) {
        IVar2 = objc_stub::count(self_00);
        if (IVar2 == 1) {
          IVar2 = objc_stub::anyObject(self_00);
          (*local_90)(&local_a0,IVar2,self);
        }
        else {
          identifyTrackWithEventObject_(param_1,param_3);
        }
      }
      else {
        (*local_90)(&local_a0,IVar5,IVar4);
      }
    }
    else {
      IVar2 = identifier(param_1);
      IVar2 = objc_stub::loginIDKey(IVar2);
      (*local_90)(&local_a0,IVar2,IVar3);
    }
  }
  return;
}

