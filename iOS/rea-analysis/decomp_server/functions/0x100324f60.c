// rea decompile_all
// name: FUN_100324f60
// address: 0x100324f60
// body: available
// range: 0x100324f60-0x10032508f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100324f60(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  uVar1 = 0xff;
  FUN_100277ad0(0xff);
  puVar2 = &DAT_100a824a8;
  FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
  uVar3 = 0xff;
  (*param_5)(0xff,param_4,uVar1,puVar2);
  lVar4 = 0;
  __sScCMa(0,uVar3,PTR___ss5NeverON_100995d08,PTR___ss5NeverOs5ErrorsWP_100995d10);
  lVar7 = *(long *)(lVar4 + -8);
  lVar8 = *(long *)(lVar7 + 0x40);
  (**(code **)(lVar7 + 0x10))
            (&stack0xffffffffffffffa0 + -(lVar8 + 0xfU & 0xfffffffffffffff0),param_1,lVar4);
  uVar5 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar6 = uVar5 + 0x18 & (uVar5 ^ 0xffffffffffffffff);
  _swift_allocObject(param_6,uVar6 + lVar8,uVar5 | 7);
  *(undefined8 *)(param_6 + 0x10) = param_4;
  (**(code **)(lVar7 + 0x20))
            (param_6 + uVar6,&stack0xffffffffffffffa0 + -(lVar8 + 0xfU & 0xfffffffffffffff0),lVar4);
  (*param_2)(param_7,param_6);
  _swift_release(param_6);
  return;
}

