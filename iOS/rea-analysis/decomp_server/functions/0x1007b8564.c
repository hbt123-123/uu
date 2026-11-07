// rea decompile_all
// name: FUN_1007b8564
// address: 0x1007b8564
// body: available
// range: 0x1007b8564-0x1007b864b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_1007b8564(undefined8 param_1,uint param_2,uint param_3,code *param_4,code *param_5)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long *unaff_x20;
  long lVar6;
  undefined1 auVar7 [16];
  
  lVar6 = *unaff_x20;
  uVar3 = param_1;
  uVar4 = param_2;
  FUN_1001a2c70();
  lVar5 = *(long *)(lVar6 + 0x10);
  lVar1 = lVar5 + ((ulong)~uVar4 & 1);
  if (SCARRY8(lVar5,(ulong)~uVar4 & 1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007b863c);
    (*pcVar2)();
  }
  lVar5 = *(long *)(lVar6 + 0x18);
  if ((lVar5 < lVar1) || ((param_3 & 1) == 0)) {
    if (((param_3 & 1) == 0) && (lVar1 <= lVar5)) {
      (*param_4)();
    }
    else {
      (*param_5)(lVar1,param_3 & 1);
      FUN_1001a2c70(param_1);
      uVar3 = param_1;
      if ((uVar4 & 1) != (param_2 & 1)) {
        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                  (PTR___sSSN_1009957f8);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1007b864c);
        (*pcVar2)();
      }
    }
  }
  auVar7._8_4_ = uVar4 & 1;
  auVar7._0_8_ = uVar3;
  auVar7._12_4_ = 0;
  return auVar7;
}

