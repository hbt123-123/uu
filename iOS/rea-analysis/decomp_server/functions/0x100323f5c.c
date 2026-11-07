// rea decompile_all
// name: FUN_100323f5c
// address: 0x100323f5c
// body: available
// range: 0x100323f5c-0x1003240cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_100323f5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 unaff_x20;
  
  puVar1 = &DAT_100a85fc8;
  FUN_100004bb4(&DAT_100a85fc8,&DAT_10081a5c8);
  lVar6 = *(long *)(*(long *)(puVar1 + -8) + 0x40);
  lVar2 = 0;
  __sScPMa();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))
            (&stack0xffffffffffffffb0 + -(lVar6 + 0xfU & 0xfffffffffffffff0),1,1,lVar2);
  puVar1 = &DAT_1009b1d78;
  _swift_allocObject(&DAT_1009b1d78,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  *(undefined8 *)(puVar1 + 0x38) = unaff_x20;
  uVar3 = 0xff;
  FUN_100277ad0(0xff);
  puVar4 = &DAT_100a824a8;
  FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
  uVar5 = 0;
  FUN_1002d9e30(0,param_4,uVar3,puVar4);
  _swift_retain(param_3);
  _swift_retain();
  uVar3 = 0;
  FUN_100321400(0,0,&stack0xffffffffffffffb0 + -(lVar6 + 0xfU & 0xfffffffffffffff0),&DAT_10081a6a8,
                puVar1,uVar5);
  _swift_retain();
  _swift_retain(uVar3);
  FUN_100325210(param_1,uVar3,param_4,FUN_1002d9e30);
  _swift_release(uVar3);
  return uVar3;
}

