// rea decompile_all
// name: FUN_10069e61c
// address: 0x10069e61c
// body: available
// range: 0x10069e61c-0x10069e713 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10069e61c(undefined8 *param_1,failure *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  void *local_88 [2];
  char local_71;
  void *local_70;
  char local_59;
  undefined8 local_50;
  undefined8 *puStack_48;
  char acStack_40 [32];
  
  if ((param_1[0xc] == 0) || (*(int *)(param_1 + 0xe) < 0)) {
    FUN_10069e714(param_2);
    uStack_a8 = *(undefined8 *)(param_2 + 8);
    local_b0 = *(undefined8 *)param_2;
    uStack_98 = *(undefined8 *)(param_2 + 0x18);
    uStack_a0 = *(undefined8 *)(param_2 + 0x10);
    local_90 = *(undefined8 *)(param_2 + 0x20);
    FUN_10069f0c8(local_88,param_2 + 0x28);
    FUN_10069e848(param_1,&local_b0);
    if (local_59 < '\0') {
      operator_delete(local_70);
    }
    if (local_71 < '\0') {
      operator_delete(local_88[0]);
    }
    FUN_10069e960(param_1,param_2);
    uVar2 = *(undefined8 *)(param_2 + 8);
    uVar1 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    param_1[4] = *(undefined8 *)(param_2 + 0x20);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
    std::string::operator=((string *)param_2,(string *)(param_1 + 5));
    std::wstring::operator=((wstring *)param_2,(wstring *)(param_1 + 8));
    *(wstring *)(param_1 + 0xb) = *(wstring *)(param_2 + 0x58);
  }
  else {
    std::iostream_category();
    local_50 = 1;
    puStack_48 = param_1;
    std::ios_base::failure::failure(param_2,acStack_40,(error_code *)"file already open");
    FUN_1006924cc();
    std::ios_base::failure::~failure(param_2);
  }
  return;
}

