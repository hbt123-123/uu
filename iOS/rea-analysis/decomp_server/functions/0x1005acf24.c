// rea decompile_all
// name: FUN_1005acf24
// address: 0x1005acf24
// body: available
// range: 0x1005acf24-0x1005ad1bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1005acf24(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar4 = *param_2;
  uVar5 = param_2[1];
  FUN_100008184(uVar4,uVar5);
  uVar8 = *param_1;
  uVar9 = param_1[1];
  *param_1 = uVar4;
  param_1[1] = uVar5;
  FUN_100006cdc(uVar8,uVar9);
  uVar1 = *(undefined4 *)(param_2 + 2);
  plVar3 = param_1 + 4;
  lVar6 = *plVar3;
  *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)((long)param_2 + 0x14);
  *(undefined4 *)(param_1 + 2) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 3);
  *(undefined1 *)((long)param_1 + 0x1c) = *(undefined1 *)((long)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 3) = uVar1;
  plVar7 = param_2 + 4;
  lVar2 = *plVar7;
  if (lVar6 == 0) {
    if (lVar2 == 0) {
      lVar2 = *plVar7;
      param_1[5] = param_2[5];
      *plVar3 = lVar2;
      uVar8 = param_2[7];
      uVar4 = param_2[6];
      uVar9 = param_2[9];
      uVar5 = param_2[8];
      uVar11 = param_2[0xb];
      uVar10 = param_2[10];
      uVar12 = *(undefined8 *)((long)param_2 + 0x59);
      *(undefined8 *)((long)param_1 + 0x61) = *(undefined8 *)((long)param_2 + 0x61);
      *(undefined8 *)((long)param_1 + 0x59) = uVar12;
      param_1[9] = uVar9;
      param_1[8] = uVar5;
      param_1[0xb] = uVar11;
      param_1[10] = uVar10;
      param_1[7] = uVar8;
      param_1[6] = uVar4;
      return param_1;
    }
    param_1[4] = lVar2;
    uVar5 = param_2[5];
    param_1[5] = uVar5;
    uVar4 = param_2[6];
    uVar8 = param_2[7];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar5);
    FUN_100008184(uVar4,uVar8);
    param_1[6] = uVar4;
    param_1[7] = uVar8;
    param_1[8] = param_2[8];
    lVar2 = param_2[0xb];
    _swift_bridgeObjectRetain();
  }
  else {
    if (lVar2 == 0) {
      FUN_1005a7f28(plVar3);
      lVar2 = *plVar7;
      param_1[5] = param_2[5];
      *plVar3 = lVar2;
      uVar10 = param_2[9];
      uVar9 = param_2[8];
      uVar8 = param_2[0xb];
      uVar4 = param_2[10];
      uVar5 = *(undefined8 *)((long)param_2 + 0x59);
      uVar12 = param_2[7];
      uVar11 = param_2[6];
      *(undefined8 *)((long)param_1 + 0x61) = *(undefined8 *)((long)param_2 + 0x61);
      *(undefined8 *)((long)param_1 + 0x59) = uVar5;
      param_1[9] = uVar10;
      param_1[8] = uVar9;
      param_1[0xb] = uVar8;
      param_1[10] = uVar4;
      param_1[7] = uVar12;
      param_1[6] = uVar11;
      return param_1;
    }
    param_1[4] = lVar2;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(lVar6);
    uVar4 = param_1[5];
    param_1[5] = param_2[5];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar4);
    uVar4 = param_2[6];
    uVar5 = param_2[7];
    FUN_100008184(uVar4,uVar5);
    uVar8 = param_1[6];
    uVar9 = param_1[7];
    param_1[6] = uVar4;
    param_1[7] = uVar5;
    FUN_100006cdc(uVar8,uVar9);
    uVar4 = param_1[8];
    param_1[8] = param_2[8];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar4);
    lVar2 = param_2[0xb];
    if (param_1[0xb] != 0) {
      if (lVar2 == 0) {
        FUN_1005a7fb4(param_1 + 9);
        uVar8 = param_2[0xc];
        uVar4 = param_2[0xb];
        uVar5 = param_2[9];
        param_1[10] = param_2[10];
        param_1[9] = uVar5;
        param_1[0xc] = uVar8;
        param_1[0xb] = uVar4;
      }
      else {
        uVar4 = param_2[9];
        uVar5 = param_2[10];
        FUN_100008184(uVar4,uVar5);
        uVar8 = param_1[9];
        uVar9 = param_1[10];
        param_1[9] = uVar4;
        param_1[10] = uVar5;
        FUN_100006cdc(uVar8,uVar9);
        uVar4 = param_1[0xb];
        param_1[0xb] = param_2[0xb];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRelease(uVar4);
        *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
        *(undefined1 *)((long)param_1 + 0x61) = *(undefined1 *)((long)param_2 + 0x61);
        *(undefined1 *)((long)param_1 + 0x62) = *(undefined1 *)((long)param_2 + 0x62);
        *(undefined1 *)((long)param_1 + 99) = *(undefined1 *)((long)param_2 + 99);
        *(undefined1 *)((long)param_1 + 100) = *(undefined1 *)((long)param_2 + 100);
        *(undefined1 *)((long)param_1 + 0x65) = *(undefined1 *)((long)param_2 + 0x65);
        *(undefined1 *)((long)param_1 + 0x66) = *(undefined1 *)((long)param_2 + 0x66);
        *(undefined1 *)((long)param_1 + 0x67) = *(undefined1 *)((long)param_2 + 0x67);
      }
      goto LAB_1005ad1a0;
    }
  }
  if (lVar2 == 0) {
    uVar8 = param_2[10];
    uVar4 = param_2[9];
    uVar5 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar5;
    param_1[10] = uVar8;
    param_1[9] = uVar4;
  }
  else {
    uVar4 = param_2[9];
    uVar8 = param_2[10];
    FUN_100008184(uVar4,uVar8);
    param_1[9] = uVar4;
    param_1[10] = uVar8;
    param_1[0xb] = param_2[0xb];
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
    *(undefined1 *)((long)param_1 + 0x61) = *(undefined1 *)((long)param_2 + 0x61);
    *(undefined1 *)((long)param_1 + 0x62) = *(undefined1 *)((long)param_2 + 0x62);
    *(undefined1 *)((long)param_1 + 99) = *(undefined1 *)((long)param_2 + 99);
    *(undefined1 *)((long)param_1 + 100) = *(undefined1 *)((long)param_2 + 100);
    *(undefined1 *)((long)param_1 + 0x65) = *(undefined1 *)((long)param_2 + 0x65);
    *(undefined1 *)((long)param_1 + 0x66) = *(undefined1 *)((long)param_2 + 0x66);
    *(undefined1 *)((long)param_1 + 0x67) = *(undefined1 *)((long)param_2 + 0x67);
    _swift_bridgeObjectRetain();
  }
LAB_1005ad1a0:
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  return param_1;
}

