// rea decompile_all
// name: FUN_1000a0244
// address: 0x1000a0244
// body: available
// range: 0x1000a0244-0x1000a03e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_1000a0244(undefined8 *param_1)

{
  undefined8 *puVar1;
  ID self;
  class_t *pcVar2;
  class_t *pcVar3;
  ID IVar4;
  undefined8 uVar5;
  ID IVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  objc_super local_98;
  undefined1 auStack_88 [88];
  
  self = NSURLSessionConfiguration::defaultSessionConfiguration
                   ((ID)&_OBJC_CLASS___NSURLSessionConfiguration,"defaultSessionConfiguration");
  IVar6 = self;
  FUN_100130770();
  if (IVar6 == 0) {
    IVar4 = 0;
  }
  else {
    IVar4 = IVar6;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
    _swift_bridgeObjectRelease(IVar6);
  }
  NSURLSessionConfiguration::setConnectionProxyDictionary_
            (self,"setConnectionProxyDictionary:",IVar4);
  pcVar2 = (class_t *)0x0;
  FUN_1000a05e8();
  pcVar3 = pcVar2;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)
           ((long)&pcVar3->isa + _TtC14UURemoteServer30ProxyFilePickerSessionDelegate::proxy);
  uVar8 = *param_1;
  uVar7 = param_1[3];
  uVar5 = param_1[2];
  puVar1[1] = param_1[1];
  *puVar1 = uVar8;
  uVar9 = param_1[5];
  uVar8 = param_1[4];
  uVar11 = param_1[7];
  uVar10 = param_1[6];
  uVar13 = param_1[9];
  uVar12 = param_1[8];
  puVar1[10] = param_1[10];
  puVar1[7] = uVar11;
  puVar1[6] = uVar10;
  puVar1[9] = uVar13;
  puVar1[8] = uVar12;
  puVar1[3] = uVar7;
  puVar1[2] = uVar5;
  puVar1[5] = uVar9;
  puVar1[4] = uVar8;
  FUN_1000a03e8(param_1,auStack_88);
  local_98.receiver = (ID)pcVar3;
  local_98.super_class = pcVar2;
  IVar4 = _objc_msgSendSuper2(&local_98,"init");
  FUN_10035da7c(0);
  _objc_allocWithZone();
  uVar5 = 0;
  FUN_10035d9b4(0,0xe000000000000000,0,0);
  IVar6 = NSOperationQueue::mainQueue((ID)&_OBJC_CLASS___NSOperationQueue,"mainQueue");
  uVar7 = 0;
  FUN_100372bc8(0);
  _objc_allocWithZone();
  FUN_1003708e8(IVar4,uVar5,self,IVar6,uVar7);
  return IVar4;
}

