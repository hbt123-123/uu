// rea decompile_all
// name: FUN_100329edc
// address: 0x100329edc
// body: available
// range: 0x100329edc-0x10032a0cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100329edc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined1 *local_70;
  
  puVar2 = &DAT_100a85fc0;
  local_88 = param_2;
  FUN_100004bb4(&DAT_100a85fc0,&DAT_10081a5c0);
  uVar9 = *(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar7 = auStack_90 + -uVar9;
  puVar2 = &DAT_100a85cf0;
  FUN_100004bb4(&DAT_100a85cf0,&DAT_10081a398);
  lVar8 = *(long *)(puVar2 + -8);
  (**(code **)(lVar8 + 0x38))(puVar7,1,1,puVar2);
  puVar3 = &DAT_100a85ce8;
  FUN_100004bb4(&DAT_100a85ce8,&DAT_10081a390);
  lVar6 = *(long *)(puVar3 + -8);
  lVar10 = (long)puVar7 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100a85cd8;
  FUN_100004bb4(&DAT_100a85cd8,&DAT_10081a380);
  lVar11 = lVar10 - (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(puVar4 + -8) + 0x10))(lVar11,param_3,puVar4);
  local_70 = puVar7;
  FUN_100004bb4(&DAT_100a85418,&DAT_100819868);
  __sScS_15bufferingPolicy_ScSyxGxm_ScS12ContinuationV09BufferingB0Oyx__GyADyx_GXEtcfC(lVar10);
  (**(code **)(lVar6 + 0x10))(param_1,lVar10,puVar3);
  lVar11 = lVar11 - uVar9;
  FUN_10007f314(puVar7,lVar11,&DAT_100a85fc0,&DAT_10081a5c0);
  lVar5 = lVar11;
  (**(code **)(lVar8 + 0x30))(lVar11,1,puVar2);
  if ((int)lVar5 != 1) {
    (**(code **)(lVar6 + 8))(lVar10,puVar3);
    (**(code **)(lVar8 + 0x20))(local_88,lVar11,puVar2);
    FUN_100040bb4(puVar7,&DAT_100a85fc0,&DAT_10081a5c0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10032a0d0);
  (*pcVar1)();
}

