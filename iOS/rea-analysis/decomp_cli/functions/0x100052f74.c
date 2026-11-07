// rea decompile_all
// name: FUN_100052f74
// address: 0x100052f74
// body: available
// range: 0x100052f74-0x1000532e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100052f74(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  char *pcVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 uVar9;
  char *pcVar10;
  ulong uVar11;
  undefined8 uVar12;
  char *unaff_x20;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  char *local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar5 = PTR___swiftEmptyArrayStorage_1000f0740;
  pcVar13 = (char *)*param_1;
  pcVar10 = PTR___swiftEmptyArrayStorage_1000f0740;
  if (pcVar13 != (char *)0x0) {
    pcVar10 = pcVar13;
  }
  puVar4 = &DAT_100103f18;
  FUN_10000eb08(&DAT_100103f18,&DAT_1000d4cc0);
  _swift_initStackObject();
  uStack_68 = param_1[3];
  local_70 = param_1[2];
  *(undefined8 *)(puVar4 + 0x18) = 2;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  *(undefined8 *)(puVar4 + 0x28) = uStack_68;
  *(undefined8 *)(puVar4 + 0x20) = local_70;
  local_a8 = pcVar10;
  _swift_bridgeObjectRetain(pcVar13);
  FUN_10000eb58(&local_70,&local_b8);
  FUN_10006d548(puVar4);
  pcVar10 = local_a8;
  uVar14 = *(ulong *)(local_a8 + 0x10);
  uVar15 = (ulong)(uVar14 != 0);
  if (uVar14 < 2) {
    _swift_bridgeObjectRelease(local_a8);
    pcVar8 = PTR___swiftEmptyArrayStorage_1000f0740;
  }
  else {
    uVar11 = uVar14 - uVar15;
    local_a8 = puVar5;
    FUN_1000798d0(0,uVar11 & ((long)uVar11 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000532e8);
      (*pcVar3)();
    }
    pcVar13 = pcVar10 + uVar15 * 0x10 + 0x28;
    do {
      pcVar8 = local_a8;
      if (uVar14 <= uVar15) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000532e4);
        (*pcVar3)();
      }
      local_b8 = *(char **)(pcVar13 + -8);
      uVar7 = *(undefined8 *)pcVar13;
      local_b0 = uVar7;
      _swift_bridgeObjectRetain_n(uVar7,2);
      __sSS6appendyySSF(0x20,0xe100000000000000);
      _swift_bridgeObjectRelease(uVar7);
      uVar7 = local_b0;
      pcVar2 = local_b8;
      uVar11 = *(ulong *)(pcVar8 + 0x10);
      local_a8 = pcVar8;
      if (*(ulong *)(pcVar8 + 0x18) >> 1 <= uVar11) {
        FUN_1000798d0(1 < *(ulong *)(pcVar8 + 0x18),uVar11 + 1,1);
      }
      pcVar8 = local_a8;
      *(ulong *)(local_a8 + 0x10) = uVar11 + 1;
      *(char **)(local_a8 + uVar11 * 0x10 + 0x20) = pcVar2;
      *(undefined8 *)(local_a8 + uVar11 * 0x10 + 0x28) = uVar7;
      uVar15 = uVar15 + 1;
      pcVar13 = pcVar13 + 0x10;
    } while (uVar14 != uVar15);
    _swift_bridgeObjectRelease(pcVar10);
  }
  puVar5 = &DAT_100103ed8;
  local_b8 = pcVar8;
  FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
  puVar6 = &DAT_100103ee0;
  FUN_10002cf3c(&DAT_100103ee0,&DAT_100103ed8,&DAT_1000d5be0,PTR___sSayxGSKsMc_1000f0378);
  uVar7 = 0;
  uVar9 = 0xe000000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0,0xe000000000000000,puVar5,puVar6);
  _swift_bridgeObjectRelease();
  if (*unaff_x20 == '\0') {
    FUN_100052ca8();
    pcVar10 = pcVar8;
    FUN_100053fa0();
    _swift_bridgeObjectRelease(pcVar8);
    if (((ulong)pcVar10 & 1) == 0) {
      local_b8 = (char *)0x6e6f697469736f70;
      local_b0 = 0xeb00000000406c61;
      puVar5 = PTR___sSis23CustomStringConvertiblesWP_1000f0418;
      local_a8 = unaff_x20;
      __ss23CustomStringConvertibleP11descriptionSSvgTj
                (PTR___sSiN_1000f03e8,PTR___sSis23CustomStringConvertiblesWP_1000f0418);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar5);
      uVar12 = local_b0;
      pcVar10 = local_b8;
      goto LAB_10005323c;
    }
  }
  else if (*(long *)(unaff_x20 + 0x38) != 0) {
    if (unaff_x20[0x28] == '\0') {
      local_b8 = (char *)0x2d2d;
      local_b0 = 0xe200000000000000;
    }
    else {
      local_b8 = (char *)0x2d;
      local_b0 = 0xe100000000000000;
    }
    __sSS6appendyySSF(*(undefined8 *)(unaff_x20 + 0x30));
    uVar12 = local_b0;
    pcVar10 = local_b8;
    goto LAB_10005323c;
  }
  uVar12 = 0xe300000000000000;
  pcVar10 = (char *)0x2d2d2d;
LAB_10005323c:
  local_b8 = (char *)0x0;
  local_b0 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x15);
  _swift_bridgeObjectRelease(local_b0);
  local_b8 = (char *)0x6c706d6f632d2d2d;
  local_b0 = 0xee00206e6f697465;
  __sSS6appendyySSF(uVar7,uVar9);
  _swift_bridgeObjectRelease(uVar9);
  __sSS6appendyySSF(0x202d2d,0xe300000000000000);
  __sSS6appendyySSF(pcVar10,uVar12);
  _swift_bridgeObjectRelease(uVar12);
  auVar1._8_8_ = local_b0;
  auVar1._0_8_ = local_b8;
  return auVar1;
}

