// rea decompile_all
// name: FUN_1005aeb10
// address: 0x1005aeb10
// body: available
// range: 0x1005aeb10-0x1005aed9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1005aeb10(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_2[1];
  uVar7 = param_2[2];
  FUN_100008184(uVar2,uVar7);
  uVar6 = param_1[1];
  uVar8 = param_1[2];
  param_1[1] = uVar2;
  param_1[2] = uVar7;
  FUN_100006cdc(uVar6,uVar8);
  param_1[3] = param_2[3];
  uVar2 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  plVar3 = param_1 + 5;
  lVar4 = *plVar3;
  plVar5 = param_2 + 5;
  lVar1 = *plVar5;
  if (lVar4 == 0) {
    if (lVar1 == 0) {
      lVar1 = *plVar5;
      param_1[6] = param_2[6];
      *plVar3 = lVar1;
      uVar6 = param_2[8];
      uVar2 = param_2[7];
      uVar8 = param_2[10];
      uVar7 = param_2[9];
      uVar10 = param_2[0xc];
      uVar9 = param_2[0xb];
      *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
      param_1[10] = uVar8;
      param_1[9] = uVar7;
      param_1[0xc] = uVar10;
      param_1[0xb] = uVar9;
      param_1[8] = uVar6;
      param_1[7] = uVar2;
      return param_1;
    }
    param_1[5] = lVar1;
    uVar2 = param_2[6];
    uVar6 = param_2[7];
    _swift_bridgeObjectRetain();
    FUN_100008184(uVar2,uVar6);
    param_1[6] = uVar2;
    param_1[7] = uVar6;
    param_1[8] = param_2[8];
    lVar1 = param_2[0xb];
    _swift_bridgeObjectRetain();
  }
  else {
    if (lVar1 == 0) {
      FUN_1005a8438(plVar3);
      lVar1 = *plVar5;
      param_1[6] = param_2[6];
      *plVar3 = lVar1;
      uVar8 = param_2[10];
      uVar7 = param_2[9];
      uVar6 = param_2[0xc];
      uVar2 = param_2[0xb];
      uVar10 = param_2[8];
      uVar9 = param_2[7];
      *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
      param_1[10] = uVar8;
      param_1[9] = uVar7;
      param_1[0xc] = uVar6;
      param_1[0xb] = uVar2;
      param_1[8] = uVar10;
      param_1[7] = uVar9;
      return param_1;
    }
    param_1[5] = lVar1;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(lVar4);
    uVar2 = param_2[6];
    uVar7 = param_2[7];
    FUN_100008184(uVar2,uVar7);
    uVar6 = param_1[6];
    uVar8 = param_1[7];
    param_1[6] = uVar2;
    param_1[7] = uVar7;
    FUN_100006cdc(uVar6,uVar8);
    uVar2 = param_1[8];
    param_1[8] = param_2[8];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar2);
    lVar1 = param_2[0xb];
    if (param_1[0xb] != 0) {
      if (lVar1 == 0) {
        FUN_1005a7fb4(param_1 + 9);
        uVar6 = param_2[0xc];
        uVar2 = param_2[0xb];
        uVar7 = param_2[9];
        param_1[10] = param_2[10];
        param_1[9] = uVar7;
        param_1[0xc] = uVar6;
        param_1[0xb] = uVar2;
      }
      else {
        uVar2 = param_2[9];
        uVar7 = param_2[10];
        FUN_100008184(uVar2,uVar7);
        uVar6 = param_1[9];
        uVar8 = param_1[10];
        param_1[9] = uVar2;
        param_1[10] = uVar7;
        FUN_100006cdc(uVar6,uVar8);
        uVar2 = param_1[0xb];
        param_1[0xb] = param_2[0xb];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRelease(uVar2);
        *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
        *(undefined1 *)((long)param_1 + 0x61) = *(undefined1 *)((long)param_2 + 0x61);
        *(undefined1 *)((long)param_1 + 0x62) = *(undefined1 *)((long)param_2 + 0x62);
        *(undefined1 *)((long)param_1 + 99) = *(undefined1 *)((long)param_2 + 99);
        *(undefined1 *)((long)param_1 + 100) = *(undefined1 *)((long)param_2 + 100);
        *(undefined1 *)((long)param_1 + 0x65) = *(undefined1 *)((long)param_2 + 0x65);
        *(undefined1 *)((long)param_1 + 0x66) = *(undefined1 *)((long)param_2 + 0x66);
        *(undefined1 *)((long)param_1 + 0x67) = *(undefined1 *)((long)param_2 + 0x67);
      }
      goto LAB_1005aed7c;
    }
  }
  if (lVar1 == 0) {
    uVar6 = param_2[10];
    uVar2 = param_2[9];
    uVar7 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar7;
    param_1[10] = uVar6;
    param_1[9] = uVar2;
  }
  else {
    uVar2 = param_2[9];
    uVar6 = param_2[10];
    FUN_100008184(uVar2,uVar6);
    param_1[9] = uVar2;
    param_1[10] = uVar6;
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
LAB_1005aed7c:
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  return param_1;
}

