// rea decompile_all
// name: FUN_1006df29c
// address: 0x1006df29c
// body: available
// range: 0x1006df29c-0x1006df47f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006df340 to 0x1006de730 FUN_1006de730 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1006df3e0 to 0x1006de730 FUN_1006de730 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1006df47c to 0x1006de730 FUN_1006de730 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1006df29c(long param_1,ulong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  
  if (*(int *)(param_1 + 200) - 6U < 2) {
    lVar7 = *(long *)(param_1 + 8);
    uVar8 = (ulong)*(uint *)(param_1 + 0x24);
    if (lVar7 + uVar8 <= param_2) {
      uVar9 = (uint)(param_2 - lVar7);
      if (*(uint *)(param_1 + 0x24) < uVar9) {
        lVar10 = *(long *)(param_1 + 0x30);
        iVar2 = *(int *)(param_1 + 0xbc);
        iVar3 = *(int *)(param_1 + 0xc0);
        lVar11 = *(long *)(param_1 + 0x40);
        do {
          uVar6 = (ulong)(*(long *)(lVar7 + uVar8) * -0x30e4432340650000) >>
                  ((ulong)(0x40 - iVar3) & 0x3f);
          uVar4 = *(undefined4 *)(lVar10 + uVar6 * 4);
          puVar1 = (undefined4 *)
                   (lVar11 + (ulong)(((uint)uVar8 & ~(-1 << (ulong)(iVar2 - 1U & 0x1f))) << 1) * 4);
          *(uint *)(lVar10 + uVar6 * 4) = (uint)uVar8;
          *puVar1 = uVar4;
          puVar1[1] = 1;
          uVar8 = uVar8 + 1;
        } while ((param_2 - lVar7 & 0xffffffff) != uVar8);
      }
      *(uint *)(param_1 + 0x24) = uVar9;
      FUN_1006de730();
      return param_1;
    }
  }
  else if (*(int *)(param_1 + 200) == 5) {
    lVar7 = *(long *)(param_1 + 8);
    uVar8 = (ulong)*(uint *)(param_1 + 0x24);
    if (lVar7 + uVar8 <= param_2) {
      uVar9 = (uint)(param_2 - lVar7);
      if (*(uint *)(param_1 + 0x24) < uVar9) {
        lVar10 = *(long *)(param_1 + 0x30);
        iVar2 = *(int *)(param_1 + 0xbc);
        iVar3 = *(int *)(param_1 + 0xc0);
        lVar11 = *(long *)(param_1 + 0x40);
        do {
          uVar6 = (ulong)(*(long *)(lVar7 + uVar8) * -0x30e4432345000000) >>
                  ((ulong)(0x40 - iVar3) & 0x3f);
          uVar4 = *(undefined4 *)(lVar10 + uVar6 * 4);
          puVar1 = (undefined4 *)
                   (lVar11 + (ulong)(((uint)uVar8 & ~(-1 << (ulong)(iVar2 - 1U & 0x1f))) << 1) * 4);
          *(uint *)(lVar10 + uVar6 * 4) = (uint)uVar8;
          *puVar1 = uVar4;
          puVar1[1] = 1;
          uVar8 = uVar8 + 1;
        } while ((param_2 - lVar7 & 0xffffffff) != uVar8);
      }
      *(uint *)(param_1 + 0x24) = uVar9;
      FUN_1006de730();
      return param_1;
    }
  }
  else {
    lVar7 = *(long *)(param_1 + 8);
    uVar8 = (ulong)*(uint *)(param_1 + 0x24);
    if (lVar7 + uVar8 <= param_2) {
      uVar9 = (uint)(param_2 - lVar7);
      if (*(uint *)(param_1 + 0x24) < uVar9) {
        lVar10 = *(long *)(param_1 + 0x30);
        iVar2 = *(int *)(param_1 + 0xbc);
        iVar3 = *(int *)(param_1 + 0xc0);
        lVar11 = *(long *)(param_1 + 0x40);
        do {
          uVar5 = (uint)(*(int *)(lVar7 + uVar8) * -0x61c8864f) >> (ulong)(0x20U - iVar3 & 0x1f);
          uVar4 = *(undefined4 *)(lVar10 + (ulong)uVar5 * 4);
          puVar1 = (undefined4 *)
                   (lVar11 + (ulong)(((uint)uVar8 & ~(-1 << (ulong)(iVar2 - 1U & 0x1f))) << 1) * 4);
          *(uint *)(lVar10 + (ulong)uVar5 * 4) = (uint)uVar8;
          *puVar1 = uVar4;
          puVar1[1] = 1;
          uVar8 = uVar8 + 1;
        } while ((param_2 - lVar7 & 0xffffffff) != uVar8);
      }
      *(uint *)(param_1 + 0x24) = uVar9;
      FUN_1006de730();
      return param_1;
    }
  }
  return 0;
}

