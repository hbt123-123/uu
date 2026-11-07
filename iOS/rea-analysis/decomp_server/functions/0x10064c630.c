// rea decompile_all
// name: FUN_10064c630
// address: 0x10064c630
// body: available
// range: 0x10064c630-0x10064c73b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10064c630(long param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long local_60;
  ulong uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined *local_38;
  
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_38 = PTR___swiftEmptyArrayStorage_100995ea0;
  uVar1 = (uint)(param_2 >> 0x20);
  uVar3 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar3 == 0) {
      uVar5 = param_2 >> 0x30 & 0xff;
      if (uVar5 == 0) goto LAB_10064c708;
    }
    else {
      iVar4 = (int)((ulong)param_1 >> 0x20);
      if (SBORROW4(iVar4,(int)param_1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10064c73c);
        (*pcVar2)();
      }
      uVar5 = (ulong)(iVar4 - (int)param_1);
joined_r0x00010064c690:
      if ((long)uVar5 < 1) goto LAB_10064c708;
    }
    uStack_58 = uVar5 >> 3;
    local_60 = 8 - (uVar5 & 7);
    if ((uVar5 & 7) == 0) {
      uStack_58 = uStack_58 - 1;
      local_60 = 0;
    }
    FUN_10064b85c(param_1,param_2,&local_60,8,&local_50,&uStack_58);
    FUN_100006cdc(param_1,param_2);
  }
  else {
    if (uVar3 == 2) {
      uVar5 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
      if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10064c738);
        (*pcVar2)();
      }
      goto joined_r0x00010064c690;
    }
LAB_10064c708:
    FUN_100006cdc();
    local_50 = 0;
  }
  return local_50;
}

