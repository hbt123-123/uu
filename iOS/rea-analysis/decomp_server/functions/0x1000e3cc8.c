// rea decompile_all
// name: FUN_1000e3cc8
// address: 0x1000e3cc8
// body: available
// range: 0x1000e3cc8-0x1000e3e7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1000e3cc8(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long extraout_x8;
  ulong uVar5;
  long extraout_x12;
  long extraout_x13;
  ulong *puVar6;
  ulong *puVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  
  lVar4 = 0;
  FUN_1000e984c();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = (ulong *)(&stack0xffffffffffffffa0 + lVar1);
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar7 = (ulong *)((long)puVar6 - extraout_x13);
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 == *(long *)(param_2 + 0x10)) {
    if ((lVar9 == 0) || (param_1 == param_2)) {
      uVar8 = 1;
    }
    else {
      uVar5 = (ulong)*(byte *)(extraout_x12 + 0x50) + 0x20 &
              ((ulong)*(byte *)(extraout_x12 + 0x50) ^ 0xffffffffffffffff);
      param_1 = param_1 + uVar5;
      param_2 = param_2 + uVar5;
      lVar10 = *(long *)(extraout_x12 + 0x48);
      do {
        FUN_100082394(param_1,puVar7,FUN_1000e984c);
        if (lVar9 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1000e3e80);
          (*pcVar2)();
        }
        FUN_100082394(param_2,puVar6,FUN_1000e984c);
        uVar5 = *puVar7;
        if ((((uVar5 != *puVar6 || puVar7[1] != *(ulong *)(&stack0xffffffffffffffa8 + lVar1)) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar5 & 1) == 0)) ||
            (puVar7[2] != *(ulong *)(&stack0xffffffffffffffb0 + lVar1))) ||
           (puVar7[3] != *(ulong *)(&stack0xffffffffffffffb8 + lVar1))) {
          FUN_1000d27dc(puVar6,FUN_1000e984c);
          FUN_1000d27dc(puVar7,FUN_1000e984c);
          goto LAB_1000e3e54;
        }
        uVar5 = (long)puVar7 + (long)*(int *)(lVar4 + 0x1c);
        __s10Foundation3URLV2eeoiySbAC_ACtFZ(uVar5,(long)puVar6 + (long)*(int *)(lVar4 + 0x1c));
        uVar8 = (uint)uVar5;
        FUN_1000d27dc(puVar6,FUN_1000e984c);
        FUN_1000d27dc(puVar7,FUN_1000e984c);
        if ((uVar5 & 1) == 0) break;
        param_2 = param_2 + lVar10;
        param_1 = param_1 + lVar10;
        bVar3 = lVar9 != 1;
        lVar9 = lVar9 + -1;
      } while (bVar3);
    }
  }
  else {
LAB_1000e3e54:
    uVar8 = 0;
  }
  return uVar8 & 1;
}

