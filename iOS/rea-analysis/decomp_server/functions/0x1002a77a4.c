// rea decompile_all
// name: FUN_1002a77a4
// address: 0x1002a77a4
// body: available
// range: 0x1002a77a4-0x1002a7887 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002a77a4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  long *plVar7;
  undefined1 auStack_58 [24];
  
  FUN_1002c73dc();
  plVar7 = *(long **)(unaff_x20 + _TtC9Alamofire15DownloadRequest::mutableDownloadState);
  uVar6 = *(undefined8 *)(plVar7[2] + 0x10);
  _os_unfair_lock_lock(uVar6);
  puVar1 = (undefined8 *)((long)plVar7 + *(long *)(*plVar7 + 0x60));
  _swift_beginAccess(puVar1,auStack_58,0x21,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  lVar5 = 0;
  FUN_1002a7694();
  iVar4 = *(int *)(lVar5 + 0x14);
  FUN_100040bb4((long)puVar1 + (long)iVar4,&DAT_100a83428,&DAT_100817bb0);
  lVar5 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))((long)puVar1 + (long)iVar4,1,1,lVar5);
  _swift_endAccess(auStack_58);
  FUN_100006cc8(uVar2,uVar3);
  _os_unfair_lock_unlock(uVar6);
  return;
}

