// rea decompile_all
// name: FUN_100060f9c
// address: 0x100060f9c
// body: available
// range: 0x100060f9c-0x1000610f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100061064 to 0x10007ee54 FUN_10007ee54 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100060f9c(undefined8 *param_1,ulong param_2,uint param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar8 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_2;
  thunk_FUN_1001a2e54();
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1000610e4);
    (*pcVar2)();
  }
  lVar5 = *(long *)(lVar8 + 0x18);
  if ((lVar5 < lVar6) || ((param_3 & 1) == 0)) {
    if ((lVar5 < lVar6) || ((param_3 & 1) != 0)) {
      param_3 = param_3 & 1;
      FUN_100066d58(lVar6);
      uVar3 = param_2;
      thunk_FUN_1001a2e54();
      if (((uint)uVar4 & 1) != (param_3 & 1)) {
        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                  (PTR___sSiN_100995968);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000610f8);
        (*pcVar2)();
      }
    }
    else {
      FUN_1000631c8();
    }
  }
  lVar6 = *unaff_x20;
  if ((uVar4 & 1) != 0) {
    FUN_10007ee54(param_1,*(long *)(lVar6 + 0x38) + uVar3 * 0x80);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  *(ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 8) = param_2;
  puVar1 = (undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 0x80);
  uVar10 = param_1[1];
  uVar9 = *param_1;
  uVar12 = param_1[3];
  uVar11 = param_1[2];
  uVar13 = param_1[4];
  uVar15 = param_1[7];
  uVar14 = param_1[6];
  puVar1[5] = param_1[5];
  puVar1[4] = uVar13;
  puVar1[7] = uVar15;
  puVar1[6] = uVar14;
  puVar1[1] = uVar10;
  *puVar1 = uVar9;
  puVar1[3] = uVar12;
  puVar1[2] = uVar11;
  uVar10 = param_1[9];
  uVar9 = param_1[8];
  uVar12 = param_1[0xb];
  uVar11 = param_1[10];
  uVar14 = param_1[0xd];
  uVar13 = param_1[0xc];
  uVar15 = *(undefined8 *)((long)param_1 + 0x6d);
  *(undefined8 *)((long)puVar1 + 0x75) = *(undefined8 *)((long)param_1 + 0x75);
  *(undefined8 *)((long)puVar1 + 0x6d) = uVar15;
  puVar1[0xb] = uVar12;
  puVar1[10] = uVar11;
  puVar1[0xd] = uVar14;
  puVar1[0xc] = uVar13;
  puVar1[9] = uVar10;
  puVar1[8] = uVar9;
  if (!SCARRY8(*(long *)(lVar6 + 0x10),1)) {
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1000610e8);
  (*pcVar2)();
}

