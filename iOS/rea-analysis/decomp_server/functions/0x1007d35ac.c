// rea decompile_all
// name: FUN_1007d35ac
// address: 0x1007d35ac
// body: available
// range: 0x1007d35ac-0x1007d36f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1007d35ac(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong local_a0;
  ulong uStack_98;
  undefined1 auStack_90 [32];
  ulong local_70;
  ulong uStack_68;
  undefined1 auStack_60 [32];
  
  uVar3 = *param_1;
  uVar1 = param_1[1];
  local_70 = uVar3;
  uStack_68 = uVar1;
  FUN_10003e8bc(param_2,auStack_60);
  uStack_98 = uVar1;
  if (uVar3 == 0x6c6576656c && uVar1 == 0xe500000000000000) {
    local_a0 = 0x6c6576656c;
    FUN_10003e8bc(auStack_60,auStack_90);
    uVar4 = 1;
  }
  else {
    uVar2 = uVar3;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar3,uVar1,0x6c6576656c,0xe500000000000000,0);
    local_a0 = uVar3;
    FUN_10003e8bc(auStack_60,auStack_90);
    if (((uVar2 & 1) == 0) && ((local_a0 != 0x64656767756c70 || (uStack_98 != 0xe700000000000000))))
    {
      uVar3 = local_a0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (local_a0,uStack_98,0x64656767756c70,0xe700000000000000,0);
      uVar4 = (uint)uVar3;
    }
    else {
      uVar4 = 1;
    }
  }
  _swift_bridgeObjectRetain_n(uVar1,2);
  FUN_1007c62b0(&local_70,&DAT_100abd410);
  FUN_1007c62b0(&local_a0,&DAT_100abd410);
  return uVar4 & 1;
}

