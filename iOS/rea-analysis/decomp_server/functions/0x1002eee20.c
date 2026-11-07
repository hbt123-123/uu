// rea decompile_all
// name: FUN_1002eee20
// address: 0x1002eee20
// body: available
// range: 0x1002eee20-0x1002ef003 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long FUN_1002eee20(undefined8 param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_80 [8];
  undefined *local_78 [3];
  undefined *local_60;
  undefined **ppuStack_58;
  
  puVar1 = &DAT_100a84698;
  FUN_100004bb4(&DAT_100a84698,&DAT_100818fa8);
  lVar7 = *(long *)(*(long *)(puVar1 + -8) + 0x40);
  local_60 = &DAT_1009aea00;
  ppuStack_58 = &PTR_PTR_1009aebc8;
  puVar1 = &DAT_1009ae728;
  _swift_allocObject(&DAT_1009ae728,0x60,7);
  uVar8 = param_2[4];
  uVar10 = param_2[7];
  uVar9 = param_2[6];
  *(undefined8 *)(puVar1 + 0x38) = param_2[5];
  *(undefined8 *)(puVar1 + 0x30) = uVar8;
  *(undefined8 *)(puVar1 + 0x48) = uVar10;
  *(undefined8 *)(puVar1 + 0x40) = uVar9;
  uVar8 = param_2[8];
  *(undefined8 *)(puVar1 + 0x58) = param_2[9];
  *(undefined8 *)(puVar1 + 0x50) = uVar8;
  uVar10 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  *(undefined8 *)(puVar1 + 0x18) = param_2[1];
  *(undefined8 *)(puVar1 + 0x10) = uVar10;
  *(undefined8 *)(puVar1 + 0x28) = uVar9;
  *(undefined8 *)(puVar1 + 0x20) = uVar8;
  puVar2 = &DAT_100a846a0;
  local_78[0] = puVar1;
  FUN_100004bb4(&DAT_100a846a0,&DAT_100818fb0);
  (**(code **)(*(long *)(puVar2 + -8) + 0x38))
            (auStack_80 + -(lVar7 + 0xfU & 0xfffffffffffffff0),1,1,puVar2);
  plVar3 = (long *)&DAT_100a846a8;
  FUN_100004bb4(&DAT_100a846a8,&DAT_100818fb8);
  _swift_allocObject();
  lVar4 = 0;
  FUN_1002c6dd8();
  lVar5 = lVar4;
  _swift_allocObject();
  puVar6 = (undefined4 *)0x4;
  _swift_slowAlloc(4,0xffffffffffffffff);
  *(undefined4 **)(lVar5 + 0x10) = puVar6;
  *puVar6 = 0;
  plVar3[2] = lVar5;
  FUN_1002f1044(auStack_80 + -(lVar7 + 0xfU & 0xfffffffffffffff0),
                (undefined *)((long)plVar3 + *(long *)(*plVar3 + 0x60)));
  *(long **)(param_4 + 0x10) = plVar3;
  *(undefined8 *)(param_4 + 0x20) = param_1;
  FUN_1000b142c(local_78,param_4 + 0x28);
  *(undefined8 *)(param_4 + 0x50) = *(undefined8 *)(param_3 + 0x30);
  puVar1 = &DAT_100a846b0;
  FUN_100004bb4(&DAT_100a846b0,&DAT_100818fc0);
  _swift_allocObject();
  _swift_allocObject(lVar4,0x18,7);
  _swift_retain(param_3);
  puVar6 = (undefined4 *)0x4;
  _swift_slowAlloc(4,0xffffffffffffffff);
  *(undefined4 **)(lVar4 + 0x10) = puVar6;
  *puVar6 = 0;
  FUN_10003f094(local_78);
  *(long *)(puVar1 + 0x10) = lVar4;
  *(long *)(puVar1 + 0x18) = param_3;
  *(undefined **)(param_4 + 0x18) = puVar1;
  return param_4;
}

