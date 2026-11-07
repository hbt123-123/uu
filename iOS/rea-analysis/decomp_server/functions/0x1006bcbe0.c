// rea decompile_all
// name: FUN_1006bcbe0
// address: 0x1006bcbe0
// body: available
// range: 0x1006bcbe0-0x1006bcc2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006bcbe0(long param_1,int param_2,undefined4 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  undefined1 (*pauVar4) [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  iVar3 = param_2 + 0xf;
  if (-1 < param_2) {
    iVar3 = param_2;
  }
  if (0xf < param_2) {
    iVar3 = iVar3 >> 4;
    pauVar4 = (undefined1 (*) [16])(param_1 + 0x20);
    do {
      auVar5._4_4_ = param_3;
      auVar5._0_4_ = param_3;
      auVar5._8_4_ = param_3;
      auVar5._12_4_ = param_3;
      auVar5 = NEON_uqsub(pauVar4[-2],auVar5,4);
      auVar6._4_4_ = param_3;
      auVar6._0_4_ = param_3;
      auVar6._8_4_ = param_3;
      auVar6._12_4_ = param_3;
      auVar6 = NEON_uqsub(pauVar4[-1],auVar6,4);
      *(long *)(pauVar4[-2] + 8) = auVar5._8_8_;
      *(long *)pauVar4[-2] = auVar5._0_8_;
      *(long *)(pauVar4[-1] + 8) = auVar6._8_8_;
      *(long *)pauVar4[-1] = auVar6._0_8_;
      auVar1._4_4_ = param_3;
      auVar1._0_4_ = param_3;
      auVar1._8_4_ = param_3;
      auVar1._12_4_ = param_3;
      auVar5 = NEON_uqsub(*pauVar4,auVar1,4);
      auVar2._4_4_ = param_3;
      auVar2._0_4_ = param_3;
      auVar2._8_4_ = param_3;
      auVar2._12_4_ = param_3;
      auVar6 = NEON_uqsub(pauVar4[1],auVar2,4);
      *(long *)(*pauVar4 + 8) = auVar5._8_8_;
      *(long *)*pauVar4 = auVar5._0_8_;
      *(long *)(pauVar4[1] + 8) = auVar6._8_8_;
      *(long *)pauVar4[1] = auVar6._0_8_;
      iVar3 = iVar3 + -1;
      pauVar4 = pauVar4 + 4;
    } while (iVar3 != 0);
  }
  return;
}

