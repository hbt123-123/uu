// rea decompile_all
// name: FUN_10035377c
// address: 0x10035377c
// body: available
// range: 0x10035377c-0x1003539b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10035377c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_68;
  
  lVar4 = 0;
  __ss13EncodingErrorO7ContextVMa();
  lVar11 = *(long *)(lVar4 + -8);
  lVar9 = (long)&local_80 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_68 = PTR___sSSN_1009957f8;
  local_80 = param_1;
  uStack_78 = param_2;
  if ((*(byte *)(unaff_x20 + 0x18) & 1) == 0) {
    uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(uVar8);
    __ss13EncodingErrorO7ContextV10codingPath16debugDescription010underlyingB0ADSays9CodingKey_pG_SSs0B0_pSgtcfC
              (lVar9);
    lVar5 = 0;
    __ss13EncodingErrorOMa();
    puVar7 = (undefined8 *)PTR___ss13EncodingErrorOs0B0sWP_100995b30;
    _swift_allocError();
    puVar6 = &DAT_100a88428;
    FUN_100004bb4(&DAT_100a88428,&DAT_10081c4a8);
    iVar3 = *(int *)(puVar6 + 0x30);
    puVar6 = &DAT_100a82480;
    FUN_100004bb4(&DAT_100a82480,&DAT_1008182d0);
    puVar7[3] = puVar6;
    puVar6 = &DAT_1009b4368;
    _swift_allocObject(&DAT_1009b4368,0x30,7);
    *puVar7 = puVar6;
    FUN_1002c64b8(&local_80,puVar6 + 0x10);
    (**(code **)(lVar11 + 0x10))((long)puVar7 + (long)iVar3,lVar9,lVar4);
    (**(code **)(*(long *)(lVar5 + -8) + 0x68))
              (puVar7,*(undefined4 *)
                       PTR___ss13EncodingErrorO12invalidValueyAByp_AB7ContextVtcABmFWC_100995b20,
               lVar5);
    _swift_willThrow();
    (**(code **)(lVar11 + 8))(lVar9,lVar4);
    FUN_100358178(&local_80);
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    FUN_100358178(&local_80);
    lVar4 = *(long *)(unaff_x20 + 0x20);
    uVar10 = *(undefined8 *)(unaff_x20 + 0x10);
    _swift_beginAccess(lVar4 + 0x10,&local_80,0x21,0);
    uVar8 = *(undefined8 *)(lVar4 + 0x10);
    uVar1 = *(undefined8 *)(lVar4 + 0x18);
    uVar2 = *(undefined1 *)(lVar4 + 0x20);
    _swift_bridgeObjectRetain(uVar10);
    FUN_100357d58(uVar8,uVar1,uVar2);
    FUN_1003518c0(lVar4 + 0x10,param_3,param_4,0,uVar10,uVar8,uVar1,uVar2);
    _swift_endAccess(&local_80);
    FUN_100350bc0(uVar8,uVar1,uVar2);
    _swift_bridgeObjectRelease(uVar10);
    *(undefined1 *)(unaff_x20 + 0x18) = 0;
  }
  return;
}

