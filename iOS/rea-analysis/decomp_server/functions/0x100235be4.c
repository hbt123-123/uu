// rea decompile_all
// name: FUN_100235be4
// address: 0x100235be4
// body: available
// range: 0x100235be4-0x100235db7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100235be4(double param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  code *pcVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar2 = &DAT_100a7e450;
  FUN_100004bb4(&DAT_100a7e450,&DAT_100813ef0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_b0 + -extraout_x8;
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar8 = lVar7 - extraout_x12;
  _swift_beginAccess(&DAT_100b36348,auStack_78,0,0);
  lVar1 = DAT_100b36348;
  if (DAT_100b36348 == 0) {
    dVar10 = 30.0;
  }
  else {
    _swift_beginAccess(DAT_100b36348 + 0x60,auStack_a8,0,0);
    param_1 = *(double *)(lVar1 + 0x60);
    dVar10 = (double)(long)param_1;
  }
  lVar1 = _TtC6FCount6FCount::backgroundDate;
  _swift_beginAccess(unaff_x20 + _TtC6FCount6FCount::backgroundDate,auStack_90,0,0);
  FUN_1002381a8(unaff_x20 + lVar1,puVar6);
  puVar4 = puVar6;
  (**(code **)(lVar9 + 0x30))(puVar6,1,lVar3);
  if ((int)puVar4 == 1) {
    FUN_100040bb4(puVar6,&DAT_100a7e450,&DAT_100813ef0);
  }
  else {
    (**(code **)(lVar9 + 0x20))(lVar8,puVar6,lVar3);
    __s10Foundation4DateVACycfC(lVar7);
    __s10Foundation4DateV17timeIntervalSinceySdACF(lVar8);
    pcVar5 = *(code **)(lVar9 + 8);
    (*pcVar5)(lVar7,lVar3);
    (*pcVar5)(lVar8,lVar3);
    if (dVar10 < param_1) {
      return 1;
    }
  }
  return 0;
}

