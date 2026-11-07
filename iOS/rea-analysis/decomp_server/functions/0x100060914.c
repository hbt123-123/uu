// rea decompile_all
// name: FUN_100060914
// address: 0x100060914
// body: available
// range: 0x100060914-0x100060a5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100060914(undefined8 *param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  thunk_FUN_1001a2c34();
  lVar4 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar7;
  if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100060a48);
    (*pcVar1)();
  }
  lVar4 = *(long *)(lVar8 + 0x18);
  if ((lVar4 < lVar5) || ((param_3 & 1) == 0)) {
    if ((lVar4 < lVar5) || ((param_3 & 1) != 0)) {
      param_3 = param_3 & 1;
      FUN_10006601c(lVar5);
      uVar2 = param_2;
      thunk_FUN_1001a2c34();
      if (((uint)uVar3 & 1) != (param_3 & 1)) {
        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                  (PTR___ss5Int32VN_100995c78);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100060a5c);
        (*pcVar1)();
      }
    }
    else {
      FUN_100062ab0();
    }
  }
  lVar5 = *unaff_x20;
  if ((uVar3 & 1) == 0) {
    lVar4 = lVar5 + (uVar2 >> 6) * 8;
    *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
    *(int *)(*(long *)(lVar5 + 0x30) + uVar2 * 4) = (int)param_2;
    puVar6 = (undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 0x30);
    uVar9 = *param_1;
    uVar11 = param_1[3];
    uVar10 = param_1[2];
    puVar6[1] = param_1[1];
    *puVar6 = uVar9;
    puVar6[3] = uVar11;
    puVar6[2] = uVar10;
    uVar9 = *(undefined8 *)((long)param_1 + 0x19);
    *(undefined8 *)((long)puVar6 + 0x21) = *(undefined8 *)((long)param_1 + 0x21);
    *(undefined8 *)((long)puVar6 + 0x19) = uVar9;
    if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100060a4c);
      (*pcVar1)();
    }
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  }
  else {
    puVar6 = (undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 0x30);
    uVar9 = *param_1;
    uVar11 = param_1[3];
    uVar10 = param_1[2];
    puVar6[1] = param_1[1];
    *puVar6 = uVar9;
    puVar6[3] = uVar11;
    puVar6[2] = uVar10;
    uVar9 = *(undefined8 *)((long)param_1 + 0x19);
    *(undefined8 *)((long)puVar6 + 0x21) = *(undefined8 *)((long)param_1 + 0x21);
    *(undefined8 *)((long)puVar6 + 0x19) = uVar9;
  }
  return;
}

