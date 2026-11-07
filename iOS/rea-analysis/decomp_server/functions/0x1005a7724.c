// rea decompile_all
// name: FUN_1005a7724
// address: 0x1005a7724
// body: available
// range: 0x1005a7724-0x1005a790b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005a78f8 to 0x100511c8c FUN_100511c8c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_1005a7724(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,ulong param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (uint)(param_8 >> 0x20);
  uVar2 = (uint)param_8;
  uVar4 = (uint)param_4;
  if ((param_4 & 0xff) == 4) {
    if ((uVar2 & 0xff) != 4) {
      return 0;
    }
  }
  else {
    if ((uVar2 & 0xff) == 4) {
      return 0;
    }
    if (((uVar2 ^ uVar4) & 0xff) != 0) {
      return 0;
    }
  }
  uVar1 = uVar2 >> 8 & 0xff;
  if ((param_4 & 0xff00) == 0x300) {
    if (uVar1 != 3) {
      return 0;
    }
  }
  else {
    if (uVar1 == 3) {
      return 0;
    }
    if (((uVar2 ^ uVar4) & 0xff00) != 0) {
      return 0;
    }
  }
  uVar1 = uVar2 >> 0x10 & 0xff;
  if ((param_4 & 0xff0000) == 0x30000) {
    if (uVar1 != 3) {
      return 0;
    }
  }
  else {
    if (uVar1 == 3) {
      return 0;
    }
    if (((uVar2 ^ uVar4) & 0xff0000) != 0) {
      return 0;
    }
  }
  if ((param_4 & 0xff000000) == 0x3000000) {
    if ((uVar2 & 0xff000000) != 0x3000000) {
      return 0;
    }
  }
  else {
    if ((uVar2 & 0xff000000) == 0x3000000) {
      return 0;
    }
    if (*(long *)(&DAT_10083ccf8 + ((long)(param_4 << 0x20) >> 0x38) * 8) !=
        *(long *)(&DAT_10083ccf8 + ((long)(param_8 << 0x20) >> 0x38) * 8)) {
      return 0;
    }
  }
  if ((param_4 & 0xff00000000) == 0x300000000) {
    if ((uVar3 & 0xff) != 3) {
      return 0;
    }
  }
  else {
    if ((uVar3 & 0xff) == 3) {
      return 0;
    }
    if (((param_8 ^ param_4) & 0xff00000000) != 0) {
      return 0;
    }
  }
  uVar4 = uVar3 >> 8 & 0xff;
  if ((param_4 & 0xff0000000000) == 0x30000000000) {
    if (uVar4 != 3) {
      return 0;
    }
  }
  else {
    if (uVar4 == 3) {
      return 0;
    }
    if (((param_8 ^ param_4) & 0xff0000000000) != 0) {
      return 0;
    }
  }
  uVar4 = uVar3 >> 0x10 & 0xff;
  if ((param_4 & 0xff000000000000) == 0x3000000000000) {
    if (uVar4 != 3) {
      return 0;
    }
  }
  else {
    if (uVar4 == 3) {
      return 0;
    }
    if (((param_8 ^ param_4) & 0xff000000000000) != 0) {
      return 0;
    }
  }
  if (param_4 >> 0x38 == 5) {
    if ((ulong)(uVar3 >> 0x18) != 5) {
      return 0;
    }
  }
  else if (param_4 >> 0x38 != (ulong)(uVar3 >> 0x18)) {
    return 0;
  }
  FUN_1000094a4(param_1,param_2,param_5,param_6);
  if ((param_1 & 1) == 0) {
    return 0;
  }
  FUN_100511c8c(param_3,param_7);
  return param_3;
}

