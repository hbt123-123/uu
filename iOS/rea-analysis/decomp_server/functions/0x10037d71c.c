// rea decompile_all
// name: FUN_10037d71c
// address: 0x10037d71c
// body: available
// range: 0x10037d71c-0x10037d853 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10037d850 to 0x1007de08c ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10037d71c(long *param_1,undefined1 param_2)

{
  long lVar1;
  string *psVar2;
  undefined8 *puVar3;
  char *pcVar4;
  ulong local_c0 [2];
  char local_a9;
  undefined8 auStack_a8 [3];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  lVar1 = param_1[2];
  if (lVar1 == param_1[1]) {
    psVar2 = (string *)0x10;
    ___cxa_allocate_exception();
    std::to_string(param_1[2]);
    puVar3 = auStack_a8;
    std::string::insert((ulong)puVar3,(char *)0x0);
    uStack_88 = puVar3[1];
    local_90 = *puVar3;
    local_80 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    pcVar4 = (char *)&local_90;
    std::string::append(pcVar4);
    uStack_68 = *(undefined8 *)(pcVar4 + 8);
    local_70 = *(undefined8 *)pcVar4;
    local_60 = *(undefined8 *)(pcVar4 + 0x10);
    pcVar4[8] = '\0';
    pcVar4[9] = '\0';
    pcVar4[10] = '\0';
    pcVar4[0xb] = '\0';
    pcVar4[0xc] = '\0';
    pcVar4[0xd] = '\0';
    pcVar4[0xe] = '\0';
    pcVar4[0xf] = '\0';
    pcVar4[0x10] = '\0';
    pcVar4[0x11] = '\0';
    pcVar4[0x12] = '\0';
    pcVar4[0x13] = '\0';
    pcVar4[0x14] = '\0';
    pcVar4[0x15] = '\0';
    pcVar4[0x16] = '\0';
    pcVar4[0x17] = '\0';
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4[4] = '\0';
    pcVar4[5] = '\0';
    pcVar4[6] = '\0';
    pcVar4[7] = '\0';
    std::to_string(param_1[1]);
    if (-1 < local_a9) {
      local_c0[0] = (ulong)local_c0;
    }
    pcVar4 = (char *)&local_70;
    std::string::append(pcVar4,local_c0[0]);
    uStack_48 = *(undefined8 *)(pcVar4 + 8);
    local_50 = *(undefined8 *)pcVar4;
    local_40 = *(undefined8 *)(pcVar4 + 0x10);
    pcVar4[8] = '\0';
    pcVar4[9] = '\0';
    pcVar4[10] = '\0';
    pcVar4[0xb] = '\0';
    pcVar4[0xc] = '\0';
    pcVar4[0xd] = '\0';
    pcVar4[0xe] = '\0';
    pcVar4[0xf] = '\0';
    pcVar4[0x10] = '\0';
    pcVar4[0x11] = '\0';
    pcVar4[0x12] = '\0';
    pcVar4[0x13] = '\0';
    pcVar4[0x14] = '\0';
    pcVar4[0x15] = '\0';
    pcVar4[0x16] = '\0';
    pcVar4[0x17] = '\0';
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4[4] = '\0';
    pcVar4[5] = '\0';
    pcVar4[6] = '\0';
    pcVar4[7] = '\0';
    std::logic_error::logic_error((logic_error *)local_c0,psVar2);
    *(undefined **)psVar2 = PTR_vtable_1009951c8 + 0x10;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(psVar2,PTR_typeinfo_1009965b8,PTR__out_of_range_1009950f0);
  }
  param_1[2] = lVar1 + 1;
  *(undefined1 *)(*param_1 + lVar1) = param_2;
  return;
}

