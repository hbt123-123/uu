// rea decompile_all
// name: FUN_1001bbe24
// address: 0x1001bbe24
// body: available
// range: 0x1001bbe24-0x1001bbfbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1001bbe24(ulong param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  long unaff_x20;
  undefined1 auStack_d0 [16];
  ulong *local_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong local_98;
  ulong uStack_90;
  byte local_88;
  
  FUN_1001bb9f8(&local_98);
  if ((local_88 & 1) != 0) {
    uVar2 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar2 = param_2 >> 0x38 & 0xf;
    }
    if ((uVar2 != 0) &&
       ((uVar2 = local_98, local_98 == param_1 && uStack_90 == param_2 ||
        (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (local_98,uStack_90,param_1,param_2,0), uVar2 = local_98, (local_98 & 1) != 0))))
    {
      FUN_1001bc1d8();
      uVar3 = 0;
      FUN_100153bbc(0);
      uVar4 = uVar2;
      _swift_dynamicCastClass(uVar2,uVar3);
      if (uVar4 != 0) {
        FUN_1001be604(&local_98);
        uVar3 = *(undefined8 *)
                 (unaff_x20 + _TtC14UURemoteServer16ClipboardHandler::remoteDownloadPath);
        uVar1 = ((undefined8 *)
                (unaff_x20 + _TtC14UURemoteServer16ClipboardHandler::remoteDownloadPath))[1];
        _swift_bridgeObjectRetain(uVar1);
        FUN_100153dcc(param_3,uVar3,uVar1);
        uVar5 = (uint)param_3;
        _swift_unknownObjectRelease(uVar2);
        _swift_bridgeObjectRelease(uVar1);
        goto LAB_1001bbf9c;
      }
      _swift_unknownObjectRelease(uVar2);
    }
  }
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_c0 = &local_98;
  uStack_b8 = param_1;
  local_b0 = param_2;
  FUN_1003fb4bc(FUN_1001be5f8,auStack_d0,0xd00000000000009f,0x8000000100892750,0xd000000000000022,
                0x800000010089c890,0xf0,0);
  FUN_1001be604(&local_98);
  uVar5 = 0;
LAB_1001bbf9c:
  return uVar5 & 1;
}

