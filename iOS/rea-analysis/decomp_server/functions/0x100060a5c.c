// rea decompile_all
// name: FUN_100060a5c
// address: 0x100060a5c
// body: available
// range: 0x100060a5c-0x100060bbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100060b34 to 0x100006cdc FUN_100006cdc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100060a5c(undefined8 param_1,ulong param_2,undefined8 *param_3,uint param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
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
  
  lVar8 = *unaff_x20;
  puVar2 = param_3;
  uVar3 = param_2;
  FUN_1001a2cd4();
  lVar4 = *(long *)(lVar8 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar6;
  if (SCARRY8(lVar4,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100060ba8);
    (*pcVar1)();
  }
  lVar4 = *(long *)(lVar8 + 0x18);
  if ((lVar4 < lVar5) || ((param_4 & 1) == 0)) {
    if ((lVar4 < lVar5) || ((param_4 & 1) != 0)) {
      param_4 = param_4 & 1;
      FUN_1000662a8(lVar5);
      puVar2 = param_3;
      FUN_1001a2cd4();
      if (((uint)uVar3 & 1) != (param_4 & 1)) {
        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(&DAT_100997028);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100060bbc);
        (*pcVar1)();
      }
    }
    else {
      FUN_100062c28();
    }
  }
  lVar5 = *unaff_x20;
  if ((uVar3 & 1) != 0) {
    puVar2 = (undefined8 *)(*(long *)(lVar5 + 0x38) + (long)puVar2 * 0x10);
    uVar9 = *puVar2;
    uVar10 = puVar2[1];
    *puVar2 = param_1;
    puVar2[1] = param_2;
    FUN_100006cdc(uVar9,uVar10);
    return;
  }
  lVar4 = lVar5 + ((ulong)puVar2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << ((ulong)puVar2 & 0x3f);
  puVar7 = (undefined8 *)(*(long *)(lVar5 + 0x30) + (long)puVar2 * 0x30);
  uVar9 = *param_3;
  uVar11 = param_3[3];
  uVar10 = param_3[2];
  puVar7[1] = param_3[1];
  *puVar7 = uVar9;
  puVar7[3] = uVar11;
  puVar7[2] = uVar10;
  uVar9 = *(undefined8 *)((long)param_3 + 0x19);
  *(undefined8 *)((long)puVar7 + 0x21) = *(undefined8 *)((long)param_3 + 0x21);
  *(undefined8 *)((long)puVar7 + 0x19) = uVar9;
  puVar2 = (undefined8 *)(*(long *)(lVar5 + 0x38) + (long)puVar2 * 0x10);
  *puVar2 = param_1;
  puVar2[1] = param_2;
  if (!SCARRY8(*(long *)(lVar5 + 0x10),1)) {
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100060bac);
  (*pcVar1)();
}

