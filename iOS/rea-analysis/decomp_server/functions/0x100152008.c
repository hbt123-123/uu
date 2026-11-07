// rea decompile_all
// name: FUN_100152008
// address: 0x100152008
// body: available
// range: 0x100152008-0x100152227 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100152008(undefined8 *param_1,long param_2,ID param_3,undefined8 param_4,undefined8 param_5
                  )

{
  ulong uVar1;
  undefined *puVar2;
  ID IVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_70;
  ulong uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x37);
  __sSS6appendyySSF(0x100000000000002b,0x80000001008923a0);
  param_2 = param_2 + _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    lVar7 = *(long *)(param_2 + 0x88);
    _swift_retain(lVar7);
    _swift_release(param_2);
    if (lVar7 != 0) {
      uVar6 = *(ulong *)(lVar7 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::file);
      uVar1 = ((ulong *)(lVar7 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::file))[1];
      _swift_bridgeObjectRetain(uVar1);
      _swift_release(lVar7);
      uVar5 = uVar6 & 0xffffffffffff;
      if ((uVar1 & 0x2000000000000000) != 0) {
        uVar5 = uVar1 >> 0x38 & 0xf;
      }
      if (uVar5 == 0) {
        _swift_bridgeObjectRelease(uVar1);
        local_70 = 0;
        uVar6 = 0xe000000000000000;
      }
      else {
        _swift_bridgeObjectRetain(uVar1);
        local_70 = 4;
        uVar5 = uVar1;
        FUN_10018b790(4,uVar6,uVar1);
        _swift_bridgeObjectRelease(uVar1);
        __sSS14_fromSubstringySSSshFZ(local_70,uVar6,uVar5,param_5);
        _swift_bridgeObjectRelease(param_5);
        _swift_bridgeObjectRelease(uVar1);
      }
      goto LAB_100152140;
    }
  }
  local_70 = 0;
  uVar6 = 0;
LAB_100152140:
  puVar2 = &DAT_100a75b50;
  uStack_68 = uVar6;
  FUN_100004bb4(&DAT_100a75b50,&DAT_100809be0);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_70,&local_60,puVar2,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  _swift_bridgeObjectRelease(uVar6);
  __sSS6appendyySSF(0x3aafafe89994e92d,0xa800000000000000);
  pcVar4 = "description";
  IVar3 = _objc_msgSend(param_3,"description");
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar3);
  __sSS6appendyySSF(IVar3,pcVar4);
  _swift_bridgeObjectRelease(pcVar4);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_60;
  param_1[1] = uStack_58;
  return;
}

