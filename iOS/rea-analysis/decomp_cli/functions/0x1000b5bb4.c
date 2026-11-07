// rea decompile_all
// name: FUN_1000b5bb4
// address: 0x1000b5bb4
// body: available
// range: 0x1000b5bb4-0x1000b5c3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1000b5bb4(long *param_1,long *param_2)

{
  long *plVar1;
  long local_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long local_30;
  long lStack_28;
  long lStack_20;
  long lStack_18;
  
  if (*param_1 == *param_2) {
    lStack_48 = param_1[6];
    local_50 = param_1[5];
    lStack_38 = param_1[8];
    lStack_40 = param_1[7];
    lStack_28 = param_1[10];
    local_30 = param_1[9];
    lStack_18 = param_1[0xc];
    lStack_20 = param_1[0xb];
    lStack_68 = param_1[2];
    local_70 = param_1[1];
    lStack_58 = param_1[4];
    lStack_60 = param_1[3];
    lStack_a8 = param_2[6];
    local_b0 = param_2[5];
    lStack_98 = param_2[8];
    lStack_a0 = param_2[7];
    lStack_88 = param_2[10];
    local_90 = param_2[9];
    lStack_78 = param_2[0xc];
    lStack_80 = param_2[0xb];
    lStack_c8 = param_2[2];
    local_d0 = param_2[1];
    lStack_b8 = param_2[4];
    lStack_c0 = param_2[3];
    plVar1 = &local_70;
    FUN_1000bb36c(plVar1,&local_d0);
    return (uint)plVar1 & 1;
  }
  return 0;
}

