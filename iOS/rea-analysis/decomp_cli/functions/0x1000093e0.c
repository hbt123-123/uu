// rea decompile_all
// name: FUN_1000093e0
// address: 0x1000093e0
// body: available
// range: 0x1000093e0-0x100009637 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1000093e0(long param_1)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long extraout_x8;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar5 = 0;
  FUN_100010d74();
  lVar12 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(lVar12 + 0x40));
  lVar5 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_70 + lVar5;
  local_68 = *(long *)(param_1 + 0x10);
  if (local_68 == 0) {
    uVar11 = 0;
  }
  else {
    bVar1 = *(byte *)(lVar12 + 0x50);
    uVar10 = local_68 - 1;
    uVar8 = 0;
    while( true ) {
      if (*(ulong *)(param_1 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100009638);
        (*pcVar3)();
      }
      FUN_10000fc0c(param_1 + ((ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff)) +
                    *(long *)(lVar12 + 0x48) * uVar8,puVar9,FUN_100010d74);
      bVar2 = (&stack0xffffffffffffffb0)[lVar5];
      if (bVar2 < 2) break;
      uVar6 = 0x657463656e6e6f63;
      if (bVar2 != 2) {
        uVar6 = 0x64656c696166;
      }
      uVar7 = 0xe900000000000064;
      if (bVar2 != 2) {
        uVar7 = 0xe600000000000000;
      }
LAB_1000094e8:
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar6,uVar7,0x697463656e6e6f63,0xea0000000000676e,0);
      _swift_bridgeObjectRelease(uVar7);
      if ((uVar6 & 1) != 0) goto LAB_1000095f4;
      if (bVar2 < 2) {
        uVar6 = 0x656e6e6f63736964;
        if (bVar2 != 0) {
          uVar6 = 0x697463656e6e6f63;
        }
        uVar7 = 0xec00000064657463;
        if (bVar2 != 0) {
          uVar7 = 0xea0000000000676e;
        }
      }
      else {
        if (bVar2 != 3) {
          uVar7 = 0xe900000000000064;
          goto LAB_1000095f0;
        }
        uVar7 = 0xe600000000000000;
        uVar6 = 0x64656c696166;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar6,uVar7,0x657463656e6e6f63,0xe900000000000064,0);
      uVar11 = (uint)uVar6;
      _swift_bridgeObjectRelease(uVar7);
      FUN_10000fc50(puVar9,FUN_100010d74);
      if (((uVar6 & 1) != 0) || (bVar4 = uVar10 == uVar8, uVar8 = uVar8 + 1, bVar4))
      goto LAB_100009608;
    }
    uVar6 = 0x656e6e6f63736964;
    uVar7 = 0xec00000064657463;
    if (bVar2 == 0) goto LAB_1000094e8;
    uVar7 = 0xea0000000000676e;
LAB_1000095f0:
    _swift_bridgeObjectRelease(uVar7);
LAB_1000095f4:
    FUN_10000fc50(puVar9,FUN_100010d74);
    uVar11 = 1;
  }
LAB_100009608:
  return uVar11 & 1;
}

