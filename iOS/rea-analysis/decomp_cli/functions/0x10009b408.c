// rea decompile_all
// name: FUN_10009b408
// address: 0x10009b408
// body: available
// range: 0x10009b408-0x10009b59f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10009b4f4 to 0x10009b5a0 FUN_10009b5a0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10009b584 to 0x1000c2abc _swift_bridgeObjectRetain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10009b408(undefined8 *param_1,ulong param_2,ulong param_3,ulong param_4,uint param_5)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  long *unaff_x20;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar9 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_3;
  FUN_10008109c(param_2,param_3,param_4);
  lVar4 = *(long *)(lVar9 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar6;
  if (SCARRY8(lVar4,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10009b58c);
    (*pcVar1)();
  }
  lVar4 = *(long *)(lVar9 + 0x18);
  if ((lVar4 < lVar5) || ((param_5 & 1) == 0)) {
    if ((lVar4 < lVar5) || ((param_5 & 1) != 0)) {
      FUN_10009a7e8(lVar5,param_5 & 1);
      uVar2 = param_2;
      uVar6 = param_3;
      FUN_10008109c(param_2,param_3,param_4);
      if (((uint)uVar3 & 1) != ((uint)uVar6 & 1)) {
        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(&DAT_1000fa428);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10009b5a0);
        (*pcVar1)();
      }
    }
    else {
      FUN_100099ec4();
    }
  }
  lVar5 = *unaff_x20;
  if ((uVar3 & 1) != 0) {
    FUN_10009b5a0(param_1,*(long *)(lVar5 + 0x38) + uVar2 * 0x48);
    return;
  }
  lVar4 = lVar5 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
  puVar7 = (ulong *)(*(long *)(lVar5 + 0x30) + uVar2 * 0x18);
  *puVar7 = param_2;
  puVar7[1] = param_3;
  puVar7[2] = param_4;
  puVar8 = (undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 0x48);
  uVar10 = *param_1;
  puVar8[1] = param_1[1];
  *puVar8 = uVar10;
  uVar11 = param_1[3];
  uVar10 = param_1[2];
  uVar13 = param_1[5];
  uVar12 = param_1[4];
  uVar15 = param_1[7];
  uVar14 = param_1[6];
  *(undefined1 *)(puVar8 + 8) = *(undefined1 *)(param_1 + 8);
  puVar8[5] = uVar13;
  puVar8[4] = uVar12;
  puVar8[7] = uVar15;
  puVar8[6] = uVar14;
  puVar8[3] = uVar11;
  puVar8[2] = uVar10;
  if (!SCARRY8(*(long *)(lVar5 + 0x10),1)) {
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    _swift_bridgeObjectRetain(param_3);
    _swift_bridgeObjectRetain(param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10009b590);
  (*pcVar1)();
}

