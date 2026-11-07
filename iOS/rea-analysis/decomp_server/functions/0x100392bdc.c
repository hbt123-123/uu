// rea decompile_all
// name: thunk_FUN_100392ad4
// address: 0x100392bdc
// body: available
// range: 0x100392bdc-0x100392bdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 *
thunk_FUN_100392ad4(undefined1 *param_1,void *param_2,size_t param_3,void *param_4,size_t param_5)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  if ((param_2 != (void *)0x0) && (param_3 != 0)) {
    if (0xf < param_3) {
      param_3 = 0x10;
    }
    _memcpy(param_1 + 0x18,param_2,param_3);
    *(undefined4 *)(param_1 + 4) = 0;
    if ((param_4 == (void *)0x0) || (param_5 == 0)) {
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x18);
    }
    else {
      if (0xf < param_5) {
        param_5 = 0x10;
      }
      _memcpy(param_1 + 0x28,param_4,param_5);
    }
    puVar1 = operator_new(0xf4);
    *(undefined8 **)(param_1 + 8) = puVar1;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0x13] = 0;
    puVar1[0x12] = 0;
    puVar1[0x15] = 0;
    puVar1[0x14] = 0;
    puVar1[0x17] = 0;
    puVar1[0x16] = 0;
    puVar1[0x19] = 0;
    puVar1[0x18] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1c] = 0;
    *(undefined4 *)(puVar1 + 0x1e) = 0;
    FUN_10037bde0(param_1 + 0x18,0x80,puVar1);
  }
  return param_1;
}

