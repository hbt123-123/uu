// rea decompile_all
// name: FUN_100521130
// address: 0x100521130
// body: available
// range: 0x100521130-0x100521253 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100521130(undefined8 param_1,long *param_2,uint param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  undefined1 auStack_88 [24];
  long local_70;
  long lStack_68;
  undefined2 local_60;
  
  lVar9 = *unaff_x20;
  lVar4 = *param_2;
  uVar6 = param_2[1];
  uVar5 = (uint)uVar6;
  lVar3 = lVar4;
  FUN_100511c0c();
  lVar7 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar6 & 1;
  lVar1 = lVar7 + uVar8;
  if (SCARRY8(lVar7,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100521244);
    (*pcVar2)();
  }
  lVar7 = *(long *)(lVar9 + 0x18);
  if ((lVar7 < lVar1) || ((param_3 & 1) == 0)) {
    if ((lVar7 < lVar1) || ((param_3 & 1) != 0)) {
      FUN_10054b524(lVar1,param_3 & 1);
      FUN_100511c0c();
      lVar3 = lVar4;
      if (((uint)uVar6 & 1) != (uVar5 & 1)) {
        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(&DAT_1009d0ee0);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100521254);
        (*pcVar2)();
      }
    }
    else {
      FUN_10054a934();
    }
  }
  if ((uVar6 & 1) == 0) {
    FUN_10054a674();
    lStack_68 = param_2[3];
    local_70 = param_2[2];
    local_60 = (undefined2)param_2[4];
    FUN_100521e48(&local_70,auStack_88);
  }
  else {
    *(undefined8 *)(*(long *)(*unaff_x20 + 0x38) + lVar3 * 8) = param_1;
  }
  return;
}

