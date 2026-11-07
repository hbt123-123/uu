// rea decompile_all
// name: FUN_10026045c
// address: 0x10026045c
// body: available
// range: 0x10026045c-0x10026056f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10026045c(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined1 *puVar7;
  code *pcVar8;
  long lVar9;
  
  puVar2 = &DAT_100a80d28;
  pcVar1 = (code *)&DAT_100815010;
  FUN_100004bb4(&DAT_100a80d28,&DAT_100815010);
  puVar7 = &stack0xffffffffffffffc0 +
           -(*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (DAT_100a7fea0 != -1) {
    pcVar1 = FUN_10025674c;
    _swift_once(&DAT_100a7fea0,FUN_10025674c);
  }
  plVar6 = *(long **)(DAT_100b36400 + 0x10);
  pcVar8 = *(code **)(*plVar6 + 0x98);
  plVar3 = plVar6;
  _swift_retain(plVar6);
  (*pcVar8)();
  _swift_release(plVar6);
  __s10Foundation3URLV6stringACSgSSh_tcfC(puVar7,plVar3,pcVar1);
  _swift_bridgeObjectRelease(pcVar1);
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar4 + -8);
  puVar5 = puVar7;
  (**(code **)(lVar9 + 0x30))(puVar7,1,lVar4);
  if ((int)puVar5 != 1) {
    (**(code **)(lVar9 + 0x20))(param_1,puVar7,lVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100260570);
  (*pcVar1)();
}

