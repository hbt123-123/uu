// rea decompile_all
// name: FUN_10036558c
// address: 0x10036558c
// body: available
// range: 0x10036558c-0x100365823 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10036558c(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 auVar12 [16];
  
  lVar2 = 0;
  FUN_100365824();
  puVar6 = &stack0xffffffffffffffb0 +
           -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  FUN_100365838();
  puVar4 = puVar6 + -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  FUN_10036584c();
  puVar7 = puVar4 + -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  FUN_100365860();
  puVar8 = puVar7 + -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  FUN_100365874();
  puVar11 = puVar8 + -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  FUN_100365888();
  puVar9 = (undefined8 *)
           (puVar11 + -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  FUN_100082394();
  puVar3 = puVar9;
  _swift_getEnumCaseMultiPayload(puVar9,lVar2);
  iVar1 = (int)puVar3;
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      pcVar5 = FUN_100365874;
      puVar10 = puVar11;
      FUN_1000823d8(puVar9,puVar11,FUN_100365874);
      FUN_10036589c();
    }
    else if (iVar1 == 1) {
      pcVar5 = FUN_100365860;
      puVar10 = puVar8;
      FUN_1000823d8(puVar9,puVar8,FUN_100365860);
      FUN_10036660c();
      puVar11 = puVar8;
    }
    else {
      pcVar5 = FUN_10036584c;
      puVar10 = puVar7;
      FUN_1000823d8(puVar9,puVar7,FUN_10036584c);
      FUN_100366e84();
      puVar11 = puVar7;
    }
  }
  else {
    if (4 < iVar1) {
      if (iVar1 == 5) {
        puVar3 = (undefined8 *)*puVar9;
        puVar10 = (undefined1 *)puVar9[1];
        puVar9 = puVar3;
        FUN_100368930(puVar3,puVar10);
        _swift_errorRelease(puVar3);
      }
      else {
        puVar10 = (undefined1 *)0x80000001008ac710;
        puVar9 = (undefined8 *)0xd000000000000016;
      }
      goto LAB_1003657e4;
    }
    if (iVar1 == 3) {
      pcVar5 = FUN_100365838;
      puVar10 = puVar4;
      FUN_1000823d8(puVar9,puVar4,FUN_100365838);
      FUN_100367c10();
      puVar11 = puVar4;
    }
    else {
      pcVar5 = FUN_100365824;
      puVar10 = puVar6;
      FUN_1000823d8(puVar9,puVar6,FUN_100365824);
      FUN_100368074();
      puVar11 = puVar6;
    }
  }
  FUN_1000d27dc(puVar11,pcVar5);
LAB_1003657e4:
  auVar12._8_8_ = puVar10;
  auVar12._0_8_ = puVar9;
  return auVar12;
}

