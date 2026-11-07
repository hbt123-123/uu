// rea decompile_all
// name: FUN_1003914d8
// address: 0x1003914d8
// body: available
// range: 0x1003914d8-0x10039163f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1003914d8(ulong param_1,long *param_2)

{
  ID *pIVar1;
  ID *pIVar2;
  int iVar3;
  ID IVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  FUN_100391480(*(undefined8 *)(param_1 + 0x28),&local_68);
  FUN_100391ae0(&local_68);
  lVar8 = (*(long **)(param_1 + 0x28))[1];
  lVar9 = (lVar8 - **(long **)(param_1 + 0x28) >> 3) * -0x5555555555555555 + -1;
  *(undefined4 *)(lVar8 + -0x18) = 2;
  *(undefined8 *)(lVar8 + -8) = 0;
  pIVar2 = (ID *)param_2[1];
  for (pIVar1 = (ID *)*param_2; pIVar1 != pIVar2; pIVar1 = pIVar1 + 5) {
    IVar4 = objc_stub::length(*pIVar1);
    if ((IVar4 != 0) &&
       (uVar5 = param_1, FUN_100391dc0(param_1,*pIVar1),
       uVar5 < (ulong)(((*(long **)(param_1 + 0x28))[1] - **(long **)(param_1 + 0x28) >> 3) *
                      -0x5555555555555555))) {
      uVar6 = param_1;
      FUN_1003913c4(param_1,pIVar1 + 1);
      plVar10 = *(long **)(param_1 + 0x28);
      lVar8 = *plVar10;
      if (uVar6 < (ulong)((plVar10[1] - lVar8 >> 3) * -0x5555555555555555)) {
        lVar7 = lVar8 + lVar9 * 0x18;
        *(int *)(lVar7 + 8) =
             *(int *)(lVar8 + uVar6 * 0x18 + 4) +
             *(int *)(lVar7 + 8) + *(int *)(lVar8 + uVar5 * 0x18 + 4);
      }
      else {
        lVar8 = plVar10[1] + -0x18;
        FUN_100391ae0();
        plVar10[1] = lVar8;
      }
    }
  }
  lVar8 = **(long **)(param_1 + 0x28) + lVar9 * 0x18;
  iVar3 = *(int *)(lVar8 + 8);
  FUN_10039280c();
  *(int *)(lVar8 + 4) = *(int *)(lVar8 + 8) + iVar3;
  return lVar9;
}

