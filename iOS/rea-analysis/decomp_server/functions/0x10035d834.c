// rea decompile_all
// name: FUN_10035d834
// address: 0x10035d834
// body: available
// range: 0x10035d834-0x10035d9b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10035d834(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar5 = &DAT_100a888b8;
  puVar8 = &DAT_10081cb00;
  FUN_100004bb4(&DAT_100a888b8,&DAT_10081cb00);
  puVar9 = auStack_70 + -(*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_68 = 0;
  local_60 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x17);
  _swift_bridgeObjectRelease(local_60);
  local_50 = 0x2f2f3a7370747468;
  uStack_48 = 0xe800000000000000;
  FUN_10035d610();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar8);
  __sSS6appendyySSF(0x2f,0xe100000000000000);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC10Filepicker16FilePickerConfig::projectName);
  _swift_beginAccess(puVar1,&local_68,0,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  _swift_bridgeObjectRetain(uVar3);
  __sSS6appendyySSF(uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  __sSS6appendyySSF(0x656e2f656c69662f,0xea00000000002f77);
  uVar2 = uStack_48;
  __s10Foundation3URLV6stringACSgSSh_tcfC(puVar9,local_50,uStack_48);
  _swift_bridgeObjectRelease(uVar2);
  lVar6 = 0;
  __s10Foundation3URLVMa();
  lVar10 = *(long *)(lVar6 + -8);
  puVar7 = puVar9;
  (**(code **)(lVar10 + 0x30))(puVar9,1,lVar6);
  if ((int)puVar7 != 1) {
    (**(code **)(lVar10 + 0x20))(param_1,puVar9,lVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10035d9b4);
  (*pcVar4)();
}

