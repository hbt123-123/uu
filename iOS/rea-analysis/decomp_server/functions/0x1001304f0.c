// rea decompile_all
// name: FUN_1001304f0
// address: 0x1001304f0
// body: available
// range: 0x1001304f0-0x10013071f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001305f4 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1001304f0(undefined8 param_1,undefined8 param_2,ID param_3,ID param_4,void *param_5)

{
  undefined8 *puVar1;
  class_t *pcVar2;
  ID IVar3;
  void *aBlock;
  class_t *pcVar4;
  undefined **ppuVar5;
  undefined1 auStack_e0 [16];
  ID local_d0;
  objc_super local_c0;
  undefined *local_b0;
  undefined8 uStack_a8;
  code *local_a0;
  undefined *puStack_98;
  code *local_90;
  class_t *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  pcVar2 = (class_t *)&DAT_10099e690;
  _swift_allocObject(&DAT_10099e690,0x18,7);
  pcVar2->cache = (Cache)param_5;
  __Block_copy(param_5);
  IVar3 = _objc_msgSend(param_3,"protectionSpace");
  IVar3 = _objc_msgSend(IVar3,"isProxy");
  if ((int)IVar3 != 0) {
    puVar1 = (undefined8 *)(param_4 + _TtC14UURemoteServer30ControlledProxySessionDelegate::proxy);
    pcStack_88 = (class_t *)puVar1[5];
    local_90 = (code *)puVar1[4];
    uStack_78 = puVar1[7];
    uStack_80 = puVar1[6];
    uStack_68 = puVar1[9];
    local_70 = puVar1[8];
    local_60 = puVar1[10];
    uStack_a8 = puVar1[1];
    local_b0 = (undefined *)*puVar1;
    puStack_98 = (undefined *)puVar1[3];
    local_a0 = (code *)puVar1[2];
    ppuVar5 = &local_b0;
    FUN_10012f304(param_3,ppuVar5);
    (**(code **)((long)param_5 + 0x10))(param_5,param_3,ppuVar5);
    _swift_release(pcVar2);
    return (undefined *)0x0;
  }
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_d0 = param_3;
  FUN_1003fb45c(FUN_10012f5ec,auStack_e0,0xd0000000000000a2,0x800000010088f670,&DAT_d000000000000030
                ,0x800000010088f7d0,0x20,0xb);
  local_90 = FUN_100130744;
  local_b0 = PTR___NSConcreteStackBlock_100995490;
  uStack_a8 = 0x42000000;
  local_a0 = FUN_10012f624;
  puStack_98 = &DAT_10099e6a8;
  pcStack_88 = pcVar2;
  aBlock = __Block_copy(&local_b0);
  pcVar4 = pcStack_88;
  _swift_retain(pcVar2);
  _swift_release();
  FUN_1001303d8();
  local_c0.receiver = param_4;
  local_c0.super_class = pcVar4;
  _objc_msgSendSuper2(&local_c0,"URLSession:task:didReceiveChallenge:completionHandler:",param_1,
                      param_2,param_3,aBlock);
  __Block_release(aBlock);
  _swift_release(pcVar2);
  return (undefined *)pcVar2;
}

