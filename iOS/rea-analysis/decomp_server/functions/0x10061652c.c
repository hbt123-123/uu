// rea decompile_all
// name: FUN_10061652c
// address: 0x10061652c
// body: available
// range: 0x10061652c-0x1006166a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006165d0 to 0x1007df22c _swift_errorRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10061652c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = *(long *)(*unaff_x20 + 0x50);
  lVar1 = 0;
  __sSqMa(0,lVar5);
  lVar8 = *(long *)(lVar1 + -8);
  puVar3 = (undefined8 *)
           (&stack0xffffffffffffffa0 + -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar7 = *(long *)(lVar5 + -8);
  lVar6 = (long)puVar3 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_2 != 0) {
    _swift_errorRetain(param_2);
    FUN_100616260(param_2);
    _swift_errorRelease(param_2);
    return;
  }
  (**(code **)(lVar8 + 0x10))(puVar3,param_1,lVar1);
  puVar2 = puVar3;
  (**(code **)(lVar7 + 0x30))(puVar3,1,lVar5);
  if ((int)puVar2 == 1) {
    (**(code **)(lVar8 + 8))(puVar3,lVar1);
    FUN_10060d02c();
    puVar4 = &DAT_1009df040;
    _swift_allocError(&DAT_1009df040,puVar3,0,0);
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[4] = 0;
    *(undefined1 *)(puVar3 + 5) = 2;
    FUN_100616260();
    _swift_errorRelease(puVar4);
  }
  else {
    (**(code **)(lVar7 + 0x20))(lVar6,puVar3,lVar5);
    FUN_10061630c(lVar6);
    (**(code **)(lVar7 + 8))(lVar6,lVar5);
  }
  return;
}

