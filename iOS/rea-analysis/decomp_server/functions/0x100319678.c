// rea decompile_all
// name: FUN_100319678
// address: 0x100319678
// body: available
// range: 0x100319678-0x100319887 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100319678(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_a0 [16];
  undefined8 auStack_90 [4];
  undefined1 auStack_70 [16];
  
  lVar1 = 0;
  FUN_10029642c();
  puVar8 = auStack_70 + -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0xff;
  FUN_100277ad0(0xff);
  puVar3 = &DAT_100a824a8;
  FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
  lVar4 = 0;
  FUN_10028fd24(0,param_3,uVar2,puVar3);
  lVar9 = (long)puVar8 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))(lVar9,param_2,lVar4);
  lVar1 = lVar9;
  _swift_getEnumCaseMultiPayload(lVar9,lVar4);
  if ((int)lVar1 == 1) {
    FUN_100297f6c(lVar9,puVar8);
    puVar5 = &DAT_1009b1110;
    _swift_allocObject(&DAT_1009b1110,0x18,7);
    *(undefined8 *)(puVar5 + 0x10) = param_3;
    *(undefined8 *)(lVar9 + -0x20) = param_3;
    *(code **)(lVar9 + -0x18) = FUN_10031d3b0;
    *(undefined **)(lVar9 + -0x10) = puVar5;
    puVar6 = &DAT_100a82460;
    FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
    uVar7 = 0;
    __ss6ResultOMa(0,param_3,uVar2,puVar3);
    FUN_1002dfc78(param_1,FUN_10031d378,lVar9 + -0x30,puVar6,PTR___ss5NeverON_100995d08,uVar7,
                  PTR___ss5NeverOs5ErrorsWP_100995d10);
    FUN_1000d27dc(puVar8,FUN_10029642c);
    _swift_release(puVar5);
  }
  else {
    lVar1 = 0;
    __ss6ResultOMa(0,param_3,uVar2,puVar3);
    lVar4 = *(long *)(lVar1 + -8);
    (**(code **)(lVar4 + 0x20))(param_1,lVar9,lVar1);
    (**(code **)(lVar4 + 0x38))(param_1,0,1,lVar1);
  }
  return;
}

