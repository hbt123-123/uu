// rea decompile_all
// name: FUN_10032a2b8
// address: 0x10032a2b8
// body: available
// range: 0x10032a2b8-0x10032a47b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10032a2b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 local_a0;
  undefined8 local_98;
  ulong local_90;
  undefined8 local_88;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  long lStack_68;
  
  lVar2 = 0xff;
  local_a0 = param_2;
  local_98 = param_4;
  local_88 = param_1;
  __sScS12ContinuationVMa(0xff,param_5);
  lVar3 = 0;
  __sSqMa(0,lVar2);
  lVar8 = *(long *)(lVar3 + -8);
  local_90 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar7 = (long)&local_a0 - local_90;
  lVar10 = *(long *)(lVar2 + -8);
  (**(code **)(lVar10 + 0x38))(lVar7,1,1,lVar2);
  lVar4 = 0;
  __sScSMa(0,param_5);
  lVar6 = *(long *)(lVar4 + -8);
  lVar9 = lVar7 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __sScS12ContinuationV15BufferingPolicyOMa(0,param_5);
  lVar11 = lVar9 - (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(lVar5 + -8) + 0x10))(lVar11,local_98,lVar5);
  local_70 = param_5;
  lStack_68 = lVar7;
  __sScS_15bufferingPolicy_ScSyxGxm_ScS12ContinuationV09BufferingB0Oyx__GyADyx_GXEtcfC
            (lVar9,param_5,lVar11,FUN_10032c614,auStack_80,param_5);
  (**(code **)(lVar6 + 0x10))(local_88,lVar9,lVar4);
  lVar11 = lVar11 - local_90;
  (**(code **)(lVar8 + 0x10))(lVar11,lVar7,lVar3);
  lVar5 = lVar11;
  (**(code **)(lVar10 + 0x30))(lVar11,1,lVar2);
  if ((int)lVar5 != 1) {
    (**(code **)(lVar6 + 8))(lVar9,lVar4);
    (**(code **)(lVar10 + 0x20))(local_a0,lVar11,lVar2);
    (**(code **)(lVar8 + 8))(lVar7,lVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10032a47c);
  (*pcVar1)();
}

