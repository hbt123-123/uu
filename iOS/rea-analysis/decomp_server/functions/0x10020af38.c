// rea decompile_all
// name: FUN_10020af38
// address: 0x10020af38
// body: available
// range: 0x10020af38-0x10020b8f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10020af38(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  code *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  uint uVar22;
  undefined8 local_a0;
  long local_68;
  
  puVar14 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar18 = param_1[2];
  uVar17 = *(ulong *)(lVar18 + 0x10);
  uVar15 = uVar17;
  if (9 < uVar17) {
    uVar15 = 10;
  }
  local_68 = lVar18;
  if (uVar17 != 0) {
    _swift_bridgeObjectRetain(lVar18);
    FUN_10006fae0(0,uVar15,0);
    puVar20 = (undefined8 *)(lVar18 + 0x50);
    do {
      if (uVar15 == 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10020b8f0);
        (*pcVar8)();
      }
      uVar11 = puVar20[-4];
      uVar2 = puVar20[-3];
      uVar19 = *puVar20;
      uVar3 = puVar20[1];
      uVar12 = puVar20[2];
      uVar4 = puVar20[3];
      uVar21 = puVar20[4];
      uVar5 = puVar20[5];
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar4);
      FUN_100008184(uVar21,uVar5);
      __ss11_StringGutsV4growyySiF(0x26);
      _swift_bridgeObjectRelease(0xe000000000000000);
      __sSS6appendyySSF(uVar11,uVar2);
      __sSS6appendyySSF(0x3d65707974202c,0xe700000000000000);
      puVar9 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
      __ss23CustomStringConvertibleP11descriptionSSvgTj
                (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar9);
      __sSS6appendyySSF(0x61506c6c7566202c,0xeb000000003d6874);
      __sSS6appendyySSF(uVar19,uVar3);
      __sSS6appendyySSF(0x3d6e6f6369202c,0xe700000000000000);
      __sSS6appendyySSF(uVar12,uVar4);
      _swift_bridgeObjectRelease(uVar4);
      _swift_bridgeObjectRelease(uVar3);
      _swift_bridgeObjectRelease(uVar2);
      FUN_100006cdc(uVar21,uVar5);
      uVar1 = *(ulong *)(puVar14 + 0x10);
      if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar1) {
        FUN_10006fae0(1 < *(ulong *)(puVar14 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puVar14 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar14 + uVar1 * 0x10 + 0x20) = 0x3d656d616e;
      *(undefined8 *)(puVar14 + uVar1 * 0x10 + 0x28) = 0xe500000000000000;
      puVar20 = puVar20 + 0xc;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
    FUN_100040bb4(&local_68,&DAT_100a7b890,&DAT_10080fbf8);
  }
  puVar9 = &DAT_100a756e8;
  FUN_100004bb4(&DAT_100a756e8,&BYTE_100809720);
  puVar10 = puVar9;
  FUN_10013048c();
  uVar11 = 0x207c20;
  puVar13 = (undefined *)0xe300000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x207c20,0xe300000000000000,puVar9,puVar10);
  puVar9 = puVar13;
  _swift_bridgeObjectRelease(puVar14);
  if (uVar17 < 0xb) {
    local_a0 = 0;
    uVar19 = 0xe000000000000000;
  }
  else {
    puVar14 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    puVar9 = puVar14;
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar14);
    uVar19 = 0xec0000003d746e75;
    local_a0 = 0x6f4365726f6d202c;
  }
  FUN_100208dd4();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar9);
  __sSS6appendyySSF(0x202c,0xe200000000000000);
  __sSS6appendyySSF(0x7954746e65696c63,0xeb000000003d6570);
  _swift_bridgeObjectRelease(0xeb000000003d6570);
  _swift_bridgeObjectRetain(0x80000001008a3e20);
  __sSS6appendyySSF(0xd000000000000015,0x80000001008a3e60);
  _swift_bridgeObjectRelease(0x80000001008a3e20);
  uVar15 = (ulong)param_1[0xb] >> 0x3c;
  uVar12 = 0;
  if (uVar15 < 0xf) {
    uVar12 = param_1[10];
  }
  uVar17 = 0xc000000000000000;
  if (uVar15 < 0xf) {
    uVar17 = param_1[0xb];
  }
  FUN_100040b80();
  FUN_100006cdc(uVar12,uVar17);
  puVar14 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar14);
  __sSS6appendyySSF(0x202c,0xe200000000000000);
  _swift_bridgeObjectRetain(0x80000001008a3e20);
  __sSS6appendyySSF(0x3d64496b736174,0xe700000000000000);
  _swift_bridgeObjectRelease(0x80000001008a3e20);
  _swift_bridgeObjectRelease(0xe700000000000000);
  puVar14 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int64VN_100995cc0,PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar14);
  __sSS6appendyySSF(0x202c,0xe200000000000000);
  _swift_bridgeObjectRetain(0x80000001008a3e20);
  __sSS6appendyySSF(0x4974736575716572,0xea00000000003d64);
  _swift_bridgeObjectRelease(0x80000001008a3e20);
  _swift_bridgeObjectRelease(0xea00000000003d64);
  __ss11_StringGutsV4growyySiF(0x11);
  _swift_bridgeObjectRelease(0xe000000000000000);
  __sSS6appendyySSF(*param_1,param_1[1]);
  __sSS6appendyySSF(0x202c,0xe200000000000000);
  _swift_bridgeObjectRetain(0x80000001008a3e20);
  __sSS6appendyySSF(0x65736e6f70736572,0xed00003d68746150);
  _swift_bridgeObjectRelease(0x80000001008a3e20);
  _swift_bridgeObjectRelease(0xed00003d68746150);
  puVar9 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  puVar14 = PTR___sSiN_100995968;
  puVar10 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar10);
  __sSS6appendyySSF(0x202c,0xe200000000000000);
  _swift_bridgeObjectRetain(0x80000001008a3e20);
  __sSS6appendyySSF(0x6f727245656c6966,0xea00000000003d72);
  _swift_bridgeObjectRelease(0x80000001008a3e20);
  _swift_bridgeObjectRelease(0xea00000000003d72);
  __ss11_StringGutsV4growyySiF(0x11);
  _swift_bridgeObjectRelease(0xe000000000000000);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar14,puVar9);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar9);
  __sSS6appendyySSF(0x202c,0xe200000000000000);
  _swift_bridgeObjectRetain(0x80000001008a3e20);
  __sSS6appendyySSF(0x4373656972746e65,0xed00003d746e756f);
  _swift_bridgeObjectRelease(0x80000001008a3e20);
  _swift_bridgeObjectRelease(0xed00003d746e756f);
  __ss11_StringGutsV4growyySiF(0x10);
  _swift_bridgeObjectRelease(0xe000000000000000);
  lVar18 = param_1[5];
  uVar15 = param_1[6];
  uVar6 = (uint)(uVar15 >> 0x20);
  uVar22 = uVar6 >> 0x1e;
  if (uVar6 >> 0x1e < 2) {
    if ((uVar22 != 0) && (SBORROW4((int)((ulong)lVar18 >> 0x20),(int)lVar18))) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10020b8f4);
      (*pcVar8)();
    }
  }
  else if ((uVar22 == 2) && (SBORROW8(*(long *)(lVar18 + 0x18),*(long *)(lVar18 + 0x10)))) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10020b6b8);
    (*pcVar8)();
  }
  puVar14 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar14);
  __sSS6appendyySSF(0x202c,0xe200000000000000);
  _swift_bridgeObjectRetain(0x80000001008a3e20);
  __sSS6appendyySSF(0x5361746144726964,0xec0000003d657a69);
  _swift_bridgeObjectRelease(0x80000001008a3e20);
  _swift_bridgeObjectRelease(0xec0000003d657a69);
  __ss11_StringGutsV4growyySiF(0x19);
  _swift_bridgeObjectRelease(0xe000000000000000);
  if (uVar22 < 2) {
    if (uVar22 == 0) {
      if ((uVar15 & 0xff000000000000) == 0) goto LAB_10020b7c4;
    }
    else {
      lVar16 = (long)(int)lVar18;
      lVar18 = lVar18 >> 0x20;
LAB_10020b7bc:
      if (lVar16 == lVar18) goto LAB_10020b7c4;
    }
    uVar12 = 0x65757274;
    uVar21 = 0xe400000000000000;
  }
  else {
    if (uVar22 == 2) {
      lVar16 = *(long *)(lVar18 + 0x10);
      lVar18 = *(long *)(lVar18 + 0x18);
      goto LAB_10020b7bc;
    }
LAB_10020b7c4:
    uVar21 = 0xe500000000000000;
    uVar12 = 0x65736c6166;
  }
  __sSS6appendyySSF(uVar12,uVar21);
  _swift_bridgeObjectRelease(uVar21);
  __sSS6appendyySSF(0x202c,0xe200000000000000);
  _swift_bridgeObjectRetain(0x80000001008a3e20);
  __sSS6appendyySSF(0xd000000000000015,0x80000001008a3e80);
  _swift_bridgeObjectRelease(0x80000001008a3e20);
  _swift_bridgeObjectRelease(0x80000001008a3e80);
  __sSS6appendyySSF(uVar11,puVar13);
  _swift_bridgeObjectRelease(puVar13);
  __sSS6appendyySSF(0x5d,0xe100000000000000);
  __sSS6appendyySSF(local_a0,uVar19);
  _swift_bridgeObjectRelease(uVar19);
  _swift_bridgeObjectRetain(0x80000001008a3e20);
  __sSS6appendyySSF(0x3d77656976657270,0xe90000000000005b);
  _swift_bridgeObjectRelease(0x80000001008a3e20);
  _swift_bridgeObjectRelease(0xe90000000000005b);
  auVar7._8_8_ = 0x80000001008a3e20;
  auVar7._0_8_ = 0x100000000000003b;
  return auVar7;
}

