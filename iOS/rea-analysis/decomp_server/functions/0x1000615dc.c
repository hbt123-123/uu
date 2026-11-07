// rea decompile_all
// name: FUN_1000615dc
// address: 0x1000615dc
// body: available
// range: 0x1000615dc-0x100061737 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000616a8 to 0x100082c10 FUN_100082c10 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000615dc(undefined8 *param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  FUN_1001a2f1c();
  lVar4 = *(long *)(lVar8 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar6;
  if (SCARRY8(lVar4,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100061724);
    (*pcVar1)();
  }
  lVar4 = *(long *)(lVar8 + 0x18);
  if ((lVar4 < lVar5) || ((param_3 & 1) == 0)) {
    if ((lVar4 < lVar5) || ((param_3 & 1) != 0)) {
      param_3 = param_3 & 1;
      FUN_1000682e4(lVar5);
      uVar2 = param_2;
      FUN_1001a2f1c();
      if (((uint)uVar3 & 1) != (param_3 & 1)) {
        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(&DAT_1009a1a98);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100061738);
        (*pcVar1)();
      }
    }
    else {
      FUN_100063dc0();
    }
  }
  lVar5 = *unaff_x20;
  if ((uVar3 & 1) != 0) {
    FUN_100082c10(param_1,*(long *)(lVar5 + 0x38) + uVar2 * 0x58);
    return;
  }
  lVar4 = lVar5 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
  *(char *)(*(long *)(lVar5 + 0x30) + uVar2) = (char)param_2;
  puVar7 = (undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 0x58);
  uVar9 = *param_1;
  uVar11 = param_1[3];
  uVar10 = param_1[2];
  puVar7[1] = param_1[1];
  *puVar7 = uVar9;
  puVar7[3] = uVar11;
  puVar7[2] = uVar10;
  uVar10 = param_1[5];
  uVar9 = param_1[4];
  uVar12 = param_1[7];
  uVar11 = param_1[6];
  uVar14 = param_1[9];
  uVar13 = param_1[8];
  *(undefined1 *)(puVar7 + 10) = *(undefined1 *)(param_1 + 10);
  puVar7[7] = uVar12;
  puVar7[6] = uVar11;
  puVar7[9] = uVar14;
  puVar7[8] = uVar13;
  puVar7[5] = uVar10;
  puVar7[4] = uVar9;
  if (!SCARRY8(*(long *)(lVar5 + 0x10),1)) {
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100061728);
  (*pcVar1)();
}

