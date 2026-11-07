// rea decompile_all
// name: FUN_100149eb4
// address: 0x100149eb4
// body: available
// range: 0x100149eb4-0x10014a063 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100149eb4(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_60;
  ulong uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x1f);
  __sSS6appendyySSF(0x100000000000001d,0x8000000100892fb0);
  param_2 = param_2 + _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    lVar5 = *(long *)(param_2 + 0x88);
    _swift_retain(lVar5);
    _swift_release(param_2);
    if (lVar5 != 0) {
      uVar4 = *(ulong *)(lVar5 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::file);
      uVar1 = ((ulong *)(lVar5 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::file))[1];
      _swift_bridgeObjectRetain(uVar1);
      _swift_release(lVar5);
      uVar3 = uVar4 & 0xffffffffffff;
      if ((uVar1 & 0x2000000000000000) != 0) {
        uVar3 = uVar1 >> 0x38 & 0xf;
      }
      if (uVar3 == 0) {
        _swift_bridgeObjectRelease(uVar1);
        local_60 = 0;
        uVar4 = 0xe000000000000000;
      }
      else {
        _swift_bridgeObjectRetain(uVar1);
        local_60 = 4;
        uVar3 = uVar1;
        FUN_10018b790(4,uVar4,uVar1);
        _swift_bridgeObjectRelease(uVar1);
        __sSS14_fromSubstringySSSshFZ(local_60,uVar4,uVar3,param_5);
        _swift_bridgeObjectRelease(param_5);
        _swift_bridgeObjectRelease(uVar1);
      }
      goto LAB_100149fe4;
    }
  }
  local_60 = 0;
  uVar4 = 0;
LAB_100149fe4:
  puVar2 = &DAT_100a75b50;
  uStack_58 = uVar4;
  FUN_100004bb4(&DAT_100a75b50,&DAT_100809be0);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_60,&local_50,puVar2,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  _swift_bridgeObjectRelease(uVar4);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_50;
  param_1[1] = uStack_48;
  return;
}

