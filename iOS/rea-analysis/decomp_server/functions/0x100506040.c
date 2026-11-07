// rea decompile_all
// name: FUN_100506040
// address: 0x100506040
// body: available
// range: 0x100506040-0x10050617b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100506040(undefined8 *param_1,ulong param_2,uint param_3)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  undefined1 auVar9 [16];
  
  puVar3 = (undefined8 *)0x98;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    uVar5 = param_2;
    puVar3 = _malloc(0x98);
  }
  else {
    uVar5 = 0x4d21;
    _swift_coroFrameAlloc();
  }
  *param_1 = puVar3;
  puVar3[0xf] = param_2;
  puVar3[0x10] = unaff_x20;
  lVar8 = *unaff_x20;
  uVar4 = param_2;
  FUN_1003618e4();
  *(byte *)(puVar3 + 0x12) = (byte)uVar5 & 1;
  lVar6 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar5 & 1;
  lVar1 = lVar6 + uVar7;
  if (!SCARRY8(lVar6,uVar7)) {
    lVar6 = *(long *)(lVar8 + 0x18);
    if ((lVar6 < lVar1) || ((param_3 & 1) == 0)) {
      if ((lVar6 < lVar1) || ((param_3 & 1) != 0)) {
        param_3 = param_3 & 1;
        FUN_10054be80(lVar1);
        FUN_1003618e4();
        uVar4 = param_2;
        if (((uint)uVar5 & 1) != (param_3 & 1)) {
          __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                    (PTR___sSiN_100995968);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10050617c);
          (*pcVar2)();
        }
      }
      else {
        FUN_10054ae38();
      }
    }
    puVar3[0x11] = uVar4;
    if ((uVar5 & 1) == 0) {
      puVar3[4] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
    }
    else {
      FUN_1000a0074(*(long *)(*unaff_x20 + 0x38) + uVar4 * 0x28,puVar3);
    }
    auVar9._8_8_ = puVar3;
    auVar9._0_8_ = FUN_10050617c;
    return auVar9;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10050616c);
  (*pcVar2)();
}

