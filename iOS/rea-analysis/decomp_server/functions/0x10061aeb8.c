// rea decompile_all
// name: FUN_10061aeb8
// address: 0x10061aeb8
// body: available
// range: 0x10061aeb8-0x10061b02b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10061aeb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  uVar7 = *(undefined8 *)(param_5 + 8);
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_4,param_3,0x100904f48,&TargetProtocolRequirement_100904f50);
  lVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar7,uVar1,PTR___sSTTL_100995860,PTR___s7ElementSTTl_1009956f8);
  lVar3 = 0;
  __sSqMa(0,lVar2);
  lVar8 = *(long *)(lVar3 + -8);
  puVar5 = (undefined8 *)
           (&stack0xffffffffffffffa0 + -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0));
  _swift_checkMetadataState(0,uVar1);
  __sSlsE5first7ElementQzSgvg(puVar5);
  lVar6 = *(long *)(lVar2 + -8);
  puVar4 = puVar5;
  (**(code **)(lVar6 + 0x30))(puVar5,1,lVar2);
  if ((int)puVar4 == 1) {
    (**(code **)(lVar8 + 8))(puVar5,lVar3);
    FUN_10060d02c();
    _swift_allocError(&DAT_1009df040,puVar5,0,0);
    *puVar5 = 4;
    puVar5[2] = 0;
    puVar5[1] = 0;
    puVar5[4] = 0;
    puVar5[3] = 0;
    *(undefined1 *)(puVar5 + 5) = 2;
    _swift_willThrow();
  }
  else {
    (**(code **)(lVar6 + 0x20))(param_1,puVar5,lVar2);
  }
  return;
}

