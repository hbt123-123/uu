// rea decompile_all
// name: FUN_10040dfdc
// address: 0x10040dfdc
// body: available
// range: 0x10040dfdc-0x10040e227 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10040dfdc(byte param_1,byte param_2)

{
  ulong uVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puVar6;
  
  uVar9 = 0xed0000746e756f63;
  puVar7 = (undefined1 *)0x63615f7075706f74;
  uVar8 = 0xeb00000000726568;
  puVar6 = (undefined1 *)0x746f5f7075706f74;
  if (param_1 != 5) {
    uVar8 = 0xe800000000000000;
    puVar6 = (undefined1 *)0x6b6e696c70656564;
  }
  uVar1 = 0xec000000706f705f;
  puVar3 = (undefined1 *)0x63705f7075706f74;
  if (param_1 != 3) {
    uVar1 = 0xeb00000000747261;
    puVar3 = (undefined1 *)0x74735f7075706f74;
  }
  if (param_1 < 5) {
    uVar8 = uVar1;
    puVar6 = puVar3;
  }
  pcVar2 = "";
  puVar3 = (undefined1 *)0xd000000000000012;
  if (param_1 != 1) {
    pcVar2 = "topup_conrtol_flow";
    puVar3 = &DAT_d000000000000013;
  }
  uVar1 = uVar9;
  puVar4 = puVar7;
  if (param_1 != 0) {
    uVar1 = (ulong)pcVar2 | 0x8000000000000000;
    puVar4 = puVar3;
  }
  if (param_1 < 3) {
    uVar8 = uVar1;
    puVar6 = puVar4;
  }
  if (param_2 < 3) {
    if (param_2 != 0) {
      if (param_2 == 1) {
        puVar7 = (undefined1 *)0xd000000000000012;
        uVar9 = 0x80000001008af780;
        if (puVar6 == (undefined1 *)0xd000000000000012) goto LAB_10040e1c4;
        goto LAB_10040e1f0;
      }
      uVar9 = 0x80000001008af7a0;
      puVar7 = &DAT_d000000000000013;
    }
joined_r0x00010040e198:
    if (puVar6 == puVar7) {
LAB_10040e1c4:
      if (uVar8 == uVar9) {
        uVar5 = 1;
        goto LAB_10040e204;
      }
    }
  }
  else {
    if (param_2 < 5) {
      if (param_2 == 3) {
        puVar7 = (undefined1 *)0x63705f7075706f74;
        uVar9 = 0xec000000706f705f;
        if (puVar6 == (undefined1 *)0x63705f7075706f74) goto LAB_10040e1c4;
        goto LAB_10040e1f0;
      }
      puVar7 = (undefined1 *)0x74735f7075706f74;
      uVar9 = 0xeb00000000747261;
      goto joined_r0x00010040e198;
    }
    if (param_2 == 5) {
      puVar7 = (undefined1 *)0x746f5f7075706f74;
      uVar9 = 0xeb00000000726568;
      if (puVar6 != (undefined1 *)0x746f5f7075706f74) goto LAB_10040e1f0;
      goto LAB_10040e1c4;
    }
    uVar9 = 0xe800000000000000;
    puVar7 = (undefined1 *)0x6b6e696c70656564;
    if (puVar6 == (undefined1 *)0x6b6e696c70656564) goto LAB_10040e1c4;
  }
LAB_10040e1f0:
  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
            (puVar6,uVar8,puVar7,uVar9,0);
  uVar5 = (uint)puVar6;
LAB_10040e204:
  _swift_bridgeObjectRelease(uVar8);
  _swift_bridgeObjectRelease(uVar9);
  return uVar5 & 1;
}

