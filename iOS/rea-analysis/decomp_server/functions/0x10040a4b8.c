// rea decompile_all
// name: FUN_10040a4b8
// address: 0x10040a4b8
// body: available
// range: 0x10040a4b8-0x10040a5db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_10040a4b8(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,uint param_5)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long *unaff_x20;
  long lVar10;
  undefined1 auVar11 [16];
  
  lVar10 = *unaff_x20;
  lVar4 = param_3;
  uVar6 = param_4;
  FUN_1001a2c70();
  lVar8 = *(long *)(lVar10 + 0x10);
  uVar9 = (ulong)~(uint)uVar6 & 1;
  lVar1 = lVar8 + uVar9;
  if (SCARRY8(lVar8,uVar9)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10040a5cc);
    (*pcVar3)();
  }
  lVar8 = *(long *)(lVar10 + 0x18);
  if ((lVar8 < lVar1) || ((param_5 & 1) == 0)) {
    if ((lVar8 < lVar1) || ((param_5 & 1) != 0)) {
      FUN_100067d74(lVar1,param_5 & 1);
      uVar9 = param_4;
      FUN_1001a2c70();
      lVar4 = param_3;
      if (((uint)uVar6 & 1) != ((uint)uVar9 & 1)) {
        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                  (PTR___sSSN_1009957f8);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10040a5dc);
        (*pcVar3)();
      }
    }
    else {
      FUN_100063aac();
    }
  }
  if ((uVar6 & 1) == 0) {
    FUN_1000602e0();
    _swift_bridgeObjectRetain(param_4);
    uVar5 = 0;
    uVar7 = 0;
  }
  else {
    puVar2 = (undefined8 *)(*(long *)(*unaff_x20 + 0x38) + lVar4 * 0x10);
    uVar5 = *puVar2;
    uVar7 = puVar2[1];
    *puVar2 = param_1;
    puVar2[1] = param_2;
  }
  auVar11._8_8_ = uVar7;
  auVar11._0_8_ = uVar5;
  return auVar11;
}

