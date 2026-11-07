// rea decompile_all
// name: FUN_1004050b8
// address: 0x1004050b8
// body: available
// range: 0x1004050b8-0x100405347 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1004050b8(void)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  code *pcVar5;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_80 [8];
  code *local_78;
  code *pcStack_70;
  long local_68 [3];
  
  puVar2 = &DAT_100a76b08;
  pcVar5 = (code *)&DAT_10080b6e0;
  FUN_100004bb4();
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar7 = (code *)(auStack_80 + -extraout_x8);
  lVar3 = 0;
  __s10Foundation13URLComponentsVMa();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  pcVar6 = pcVar7 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (DAT_100a892f0 != -1) {
    pcVar5 = FUN_1003dbb88;
    _swift_once(&DAT_100a892f0);
  }
  pcVar8 = DAT_100a8ccf8;
  pcVar4 = DAT_100a8ccf8;
  _swift_retain();
  FUN_1003d8888();
  (**(code **)(*(long *)pcVar8 + 0x128))(local_68);
  _swift_release(pcVar8);
  FUN_100006cc8();
  if (local_68[0] == 0) {
    if (DAT_100a89188 != -1) {
      pcVar4 = (code *)&DAT_100a89188;
      pcVar5 = FUN_1003a018c;
      _swift_once();
    }
    FUN_1003a0260();
  }
  else {
    _swift_beginAccess(local_68[0] + 0x20,local_68,0,0);
    pcVar4 = *(code **)(local_68[0] + 0x20);
    pcVar5 = *(code **)(local_68[0] + 0x28);
    _swift_bridgeObjectRetain(pcVar5);
    _swift_release(local_68[0]);
  }
  uVar1 = (ulong)pcVar4 & 0xffffffffffff;
  if (((ulong)pcVar5 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)pcVar5 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    _swift_bridgeObjectRelease(pcVar5);
    pcVar7 = (code *)0xe700000000000000;
    pcVar8 = (code *)0x6e776f6e6b6e75;
  }
  else {
    __s10Foundation13URLComponentsV6stringACSgSSh_tcfC(pcVar7,pcVar4,pcVar5);
    pcVar8 = pcVar7;
    (**(code **)(lVar9 + 0x30))(pcVar7,1,lVar3);
    if ((int)pcVar8 == 1) {
      FUN_1004060f4(pcVar7);
      pcVar7 = pcVar5;
      pcVar8 = pcVar4;
    }
    else {
      pcVar8 = pcVar6;
      (**(code **)(lVar9 + 0x20))(pcVar6,pcVar7,lVar3);
      __s10Foundation13URLComponentsV4hostSSSgvg();
      if (pcVar7 != (code *)0x0) {
        pcVar4 = pcVar7;
        _swift_bridgeObjectRelease();
        __s10Foundation13URLComponentsV6schemeSSSgvg();
        if (pcVar4 == (code *)0x0) {
          (**(code **)(lVar9 + 8))(pcVar6,lVar3);
          goto LAB_1004052f4;
        }
        local_78 = pcVar5;
        pcStack_70 = pcVar4;
        __sSS6appendyySSF(0x2f2f3a,0xe300000000000000);
        __sSS6appendyySSF(pcVar8,pcVar7);
        _swift_bridgeObjectRelease(pcVar7);
        pcVar5 = pcStack_70;
        pcVar4 = local_78;
      }
      pcVar8 = pcVar4;
      pcVar7 = pcVar5;
      (**(code **)(lVar9 + 8))(pcVar6,lVar3);
    }
  }
LAB_1004052f4:
  auVar10._8_8_ = pcVar7;
  auVar10._0_8_ = pcVar8;
  return auVar10;
}

