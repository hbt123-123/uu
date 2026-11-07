// rea decompile_all
// name: FUN_10069e714
// address: 0x10069e714
// body: available
// range: 0x10069e714-0x10069e847 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10069e714(int *param_1)

{
  uint uVar1;
  int iVar2;
  failure *unaff_x20;
  char acStack_40 [32];
  
  uVar1 = param_1[1];
  if (uVar1 == 0) {
LAB_10069e768:
    iVar2 = *param_1;
    if (iVar2 - 1U < 2 || iVar2 == 4) goto LAB_10069e7c8;
    if (iVar2 != 0) {
      std::iostream_category();
      std::ios_base::failure::failure(unaff_x20,acStack_40,(error_code *)"invalid flags");
      FUN_1006924cc(acStack_40);
      std::ios_base::failure::~failure(unaff_x20);
      goto LAB_10069e7c8;
    }
    uVar1 = param_1[1];
  }
  else if (*param_1 != 0) {
    std::iostream_category();
    std::ios_base::failure::failure
              (unaff_x20,acStack_40,
               (error_code *)"at most one of \'mode\' and \'flags\' may be specified");
    FUN_1006924cc(acStack_40);
    std::ios_base::failure::~failure(unaff_x20);
    goto LAB_10069e768;
  }
  iVar2 = 1;
  if ((uVar1 & 0x10) != 0) {
    iVar2 = 2;
  }
  *param_1 = iVar2;
  param_1[1] = 0;
LAB_10069e7c8:
  if (*(long *)(param_1 + 2) < 0) {
    std::iostream_category();
    std::ios_base::failure::failure(unaff_x20,acStack_40,(error_code *)"invalid offset");
    FUN_1006924cc(acStack_40);
    std::ios_base::failure::~failure(unaff_x20);
  }
  if (*(long *)(param_1 + 6) < 0) {
    std::iostream_category();
    std::ios_base::failure::failure(unaff_x20,acStack_40,(error_code *)"invalid new file size");
    FUN_1006924cc(acStack_40);
    std::ios_base::failure::~failure(unaff_x20);
  }
  return;
}

