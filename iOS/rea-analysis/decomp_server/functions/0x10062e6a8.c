// rea decompile_all
// name: FUN_10062e6a8
// address: 0x10062e6a8
// body: available
// range: 0x10062e6a8-0x10062ea47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10062e6a8(long param_1,ulong param_2,uint param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  undefined1 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined1 auVar16 [16];
  
  uVar5 = 9;
  uVar11 = 0xe100000000000000;
  __sSS9repeating5countS2S_SitcfC(9,0xe100000000000000,param_4);
  uVar2 = (uint)(param_2 >> 0x3c) & 3 | (param_3 & 1) << 2;
  if (uVar2 < 3) {
    if (uVar2 == 0) {
      __sSS6appendyySSF(0x65636e6575716553,0xe90000000000003a);
      uVar7 = 0;
      FUN_10062991c(0,1,1,PTR___swiftEmptyArrayStorage_100995ea0);
      uVar13 = *(ulong *)(uVar7 + 0x10);
      uVar10 = uVar7;
      if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar13) {
        uVar10 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
        FUN_10062991c(uVar10,uVar13 + 1,1,uVar7);
      }
      *(ulong *)(uVar10 + 0x10) = uVar13 + 1;
      lVar14 = uVar10 + uVar13 * 0x10;
      *(undefined8 *)(lVar14 + 0x20) = uVar5;
      *(undefined8 *)(lVar14 + 0x28) = uVar11;
      lVar14 = *(long *)(param_1 + 0x10);
      if (lVar14 != 0) {
        puVar15 = (undefined1 *)(param_1 + 0x30);
        uVar13 = uVar10;
        do {
          if (SCARRY8(param_4,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10062ea08);
            (*pcVar4)();
          }
          uVar5 = *(undefined8 *)(puVar15 + -0x10);
          uVar11 = *(undefined8 *)(puVar15 + -8);
          uVar3 = *puVar15;
          FUN_10062e3d0(uVar5,uVar11,uVar3);
          uVar6 = uVar5;
          uVar12 = uVar11;
          FUN_10062e6a8(uVar5,uVar11,uVar3,param_4 + 1);
          uVar7 = *(ulong *)(uVar13 + 0x10);
          uVar10 = uVar13;
          if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar7) {
            uVar10 = (ulong)(1 < *(ulong *)(uVar13 + 0x18));
            FUN_10062991c(uVar10,uVar7 + 1,1,uVar13);
          }
          *(ulong *)(uVar10 + 0x10) = uVar7 + 1;
          lVar1 = uVar10 + uVar7 * 0x10;
          *(undefined8 *)(lVar1 + 0x20) = uVar6;
          *(undefined8 *)(lVar1 + 0x28) = uVar12;
          FUN_10062e434(uVar5,uVar11,uVar3);
          puVar15 = puVar15 + 0x18;
          lVar14 = lVar14 + -1;
          uVar13 = uVar10;
        } while (lVar14 != 0);
      }
      goto LAB_10062e96c;
    }
    if (uVar2 == 1) {
      uVar6 = 0x3a72656765746e49;
      uVar12 = 0xe900000000000020;
    }
    else {
      uVar6 = 0x44497463656a624f;
      uVar12 = 0xea0000000000203a;
    }
LAB_10062e8f0:
    __sSS6appendyySSF(uVar6,uVar12);
    param_2 = param_2 & 0xcfffffffffffffff;
LAB_10062e8fc:
    FUN_100665cbc(param_1,param_2);
    lVar14 = param_1;
    FUN_10062fda8();
    _swift_bridgeObjectRelease(param_1);
    __sSS6appendyySSF(lVar14,param_2);
    _swift_bridgeObjectRelease(param_2);
  }
  else {
    if (uVar2 == 3) {
      uVar6 = 0x6e69727453746942;
      uVar12 = 0xeb00000000203a67;
      goto LAB_10062e8f0;
    }
    if (uVar2 == 4) {
      __ss11_StringGutsV4growyySiF(0x11);
      _swift_bridgeObjectRelease(0xe000000000000000);
      __sSS6appendyySSF(0x727453746574634f,0xed0000203a676e69);
      goto LAB_10062e8fc;
    }
    __sSS6appendyySSF(0x4c4c554e,0xe400000000000000);
  }
  uVar7 = 0;
  FUN_10062991c(0,1,1,PTR___swiftEmptyArrayStorage_100995ea0);
  uVar13 = *(ulong *)(uVar7 + 0x10);
  uVar10 = uVar7;
  if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar13) {
    uVar10 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
    FUN_10062991c(uVar10,uVar13 + 1,1,uVar7);
  }
  *(ulong *)(uVar10 + 0x10) = uVar13 + 1;
  lVar14 = uVar10 + uVar13 * 0x10;
  *(undefined8 *)(lVar14 + 0x20) = uVar5;
  *(undefined8 *)(lVar14 + 0x28) = uVar11;
LAB_10062e96c:
  _swift_bridgeObjectRetain(uVar10);
  puVar8 = &DAT_100ab8030;
  FUN_100004bb4(&DAT_100ab8030,&DAT_100848fd0);
  puVar9 = puVar8;
  FUN_10062ea58();
  uVar5 = 10;
  uVar11 = 0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(10,0xe100000000000000,puVar8,puVar9);
  _swift_bridgeObjectRelease_n(uVar10,2);
  auVar16._8_8_ = uVar11;
  auVar16._0_8_ = uVar5;
  return auVar16;
}

