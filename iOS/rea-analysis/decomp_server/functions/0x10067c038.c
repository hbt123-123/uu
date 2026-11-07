// rea decompile_all
// name: FUN_10067c038
// address: 0x10067c038
// body: available
// range: 0x10067c038-0x10067c25b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10067c0d0 to 0x10067c25c FUN_10067c25c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10067c038(ulong *param_1,long param_2,undefined *param_3,undefined8 param_4)

{
  byte bVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_78 [32];
  long local_58;
  
  puVar3 = &DAT_100ab7e30;
  FUN_100004bb4(&DAT_100ab7e30,&DAT_100848ce8);
  if (puVar3 == param_3) {
    uVar4 = *param_1;
    FUN_10067c25c(uVar4,param_1[1],param_1[2],param_1[3],param_2);
    return uVar4;
  }
  puVar3 = param_3;
  __sSl7isEmptySbvgTj(param_3,param_4);
  if (((ulong)puVar3 & 1) != 0) {
    (**(code **)(*(long *)(param_3 + -8) + 8))(param_1,param_3);
    return 0;
  }
  puVar3 = param_3;
  __sSl5countSivgTj(param_3,param_4);
  if ((long)puVar3 < 1) {
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
  }
  else {
    pcVar2 = (code *)auStack_78;
    pbVar5 = (byte *)&local_58;
    local_58 = param_2;
    __sSly7ElementQz5IndexQzcirTj(pcVar2,pbVar5,param_3,param_4);
    bVar1 = *pbVar5;
    (*pcVar2)(auStack_78,0);
    uVar7 = (uint)bVar1 << 0x18;
    if (puVar3 == (undefined *)0x1) {
      uVar9 = 0;
      uVar8 = 0;
    }
    else {
      if (SCARRY8(param_2,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10067c254);
        (*pcVar2)();
      }
      pcVar2 = (code *)auStack_78;
      pbVar5 = (byte *)&local_58;
      local_58 = param_2 + 1;
      __sSly7ElementQz5IndexQzcirTj(pcVar2,pbVar5,param_3,param_4);
      bVar1 = *pbVar5;
      (*pcVar2)(auStack_78,0);
      uVar8 = (uint)bVar1 << 0x10;
      if (puVar3 < (undefined *)0x3) {
        uVar9 = 0;
      }
      else {
        if (SCARRY8(param_2,2)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10067c258);
          (*pcVar2)();
        }
        pcVar2 = (code *)auStack_78;
        pbVar5 = (byte *)&local_58;
        local_58 = param_2 + 2;
        __sSly7ElementQz5IndexQzcirTj(pcVar2,pbVar5,param_3,param_4);
        bVar1 = *pbVar5;
        (*pcVar2)(auStack_78,0);
        uVar9 = (uint)bVar1 << 8;
        if (puVar3 != (undefined *)0x3) {
          if (SCARRY8(param_2,3)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10067c25c);
            (*pcVar2)();
          }
          pcVar2 = (code *)auStack_78;
          pbVar5 = (byte *)&local_58;
          local_58 = param_2 + 3;
          __sSly7ElementQz5IndexQzcirTj(pcVar2,pbVar5,param_3,param_4);
          uVar6 = (uint)*pbVar5;
          (*pcVar2)(auStack_78,0);
          (**(code **)(*(long *)(param_3 + -8) + 8))(param_1,param_3);
          goto LAB_10067c228;
        }
      }
    }
  }
  (**(code **)(*(long *)(param_3 + -8) + 8))(param_1,param_3);
  uVar6 = 0;
LAB_10067c228:
  return (ulong)(uVar9 | uVar6 | uVar8 | uVar7);
}

