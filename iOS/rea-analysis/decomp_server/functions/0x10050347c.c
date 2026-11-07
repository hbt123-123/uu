// rea decompile_all
// name: FUN_10050347c
// address: 0x10050347c
// body: available
// range: 0x10050347c-0x1005039c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100503704) */
/* WARNING: Removing unreachable block (ram,0x000100503878) */

void FUN_10050347c(undefined8 *param_1,ulong param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 **ppuVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *unaff_x20;
  long unaff_x21;
  long lVar9;
  long lVar10;
  undefined1 *local_160;
  undefined8 *local_158;
  undefined8 uStack_150;
  long local_148;
  undefined8 local_138;
  undefined1 local_130;
  undefined7 uStack_12f;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined1 auStack_b0 [32];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 local_70;
  
  ppuVar2 = &local_160;
  puVar3 = param_1;
  uVar6 = param_2;
  FUN_1004fd7d4();
  local_158 = param_1;
  if (unaff_x21 == 0) {
    while ((uVar6 & 1) == 0) {
      if ((puVar3 == (undefined8 *)0x1) && (*(char *)((long)unaff_x20 + 0x21) == '\x03')) {
        lVar7 = unaff_x20[0xf];
        lVar10 = lVar7 + -1;
        if (SBORROW8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100503964);
          (*pcVar1)();
        }
        unaff_x20[0xf] = lVar10;
        if (lVar10 < 0) {
          FUN_100506290();
          _swift_allocError(&DAT_1009cdf18,puVar3,0,0);
          *(undefined1 *)puVar3 = 6;
          _swift_willThrow();
          return;
        }
        FUN_1005062d0();
        local_f8 = 1;
        local_f0 = 0;
        local_130 = 1;
        puVar3 = param_1;
        uVar6 = param_2;
        FUN_1005039c8(param_1,param_2,param_3);
        if (((ulong)puVar3 & 0xff) == 0) {
          lVar8 = unaff_x20[1];
          lVar9 = lVar8 - local_148;
          if (SBORROW8(lVar8,local_148)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10050396c);
            (*pcVar1)();
          }
          if (SBORROW8(lVar8,lVar9)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100503970);
            (*pcVar1)();
          }
          *unaff_x20 = *unaff_x20 + lVar9;
          unaff_x20[1] = lVar8 - lVar9;
          *(undefined1 *)(unaff_x20 + 4) = 1;
        }
        else if (((uint)puVar3 & 0xff) != 1) {
          FUN_100506290();
          _swift_allocError(&DAT_1009cdf18,puVar3,0,0);
          *(undefined1 *)puVar3 = 3;
          _swift_willThrow();
          FUN_100506304(&uStack_150);
          return;
        }
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100503968);
          (*pcVar1)();
        }
        unaff_x20[0xf] = lVar7;
        if (unaff_x20[0xd] < lVar7) {
          *(undefined4 *)((long)ppuVar2 + -8) = 0;
          *(undefined8 *)((long)ppuVar2 + -0x10) = 0x5e;
          __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                    ("Fatal error",0xb,2,&DAT_d00000000000003b,0x80000001008bc970,
                     "SwiftProtobuf/BinaryDecoder.swift",0x21,2);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005039c8);
          (*pcVar1)();
        }
        puVar3 = &uStack_150;
        FUN_100506304();
      }
      else if (*(char *)((long)unaff_x20 + 0x21) == '\x02') {
        lVar10 = unaff_x20[9];
        if (lVar10 == 0) {
          local_70 = 0;
          uStack_88 = 0;
          local_90 = 0;
          local_78 = 0;
          uStack_80 = 0;
        }
        else {
          lVar8 = unaff_x20[10];
          plVar4 = unaff_x20 + 6;
          FUN_10003f030(plVar4,lVar10);
          lVar9 = *(long *)(lVar10 + -8);
          lVar7 = (long)ppuVar2 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
          local_160 = (undefined1 *)ppuVar2;
          (**(code **)(lVar9 + 0x10))(lVar7,plVar4,lVar10);
          (**(code **)(lVar8 + 8))(&local_90,param_2,param_3,puVar3,lVar10,lVar8);
          param_1 = local_158;
          (**(code **)(lVar9 + 8))(lVar7,lVar10);
          ppuVar2 = (undefined1 **)local_160;
          if (local_78 != 0) {
            FUN_1000a0074(&local_90,&uStack_150);
            pcVar1 = (code *)auStack_b0;
            FUN_100505f7c();
            FUN_10007f314(puVar3,&local_90,&DAT_100aaa288,&DAT_100836090);
            lVar10 = local_78;
            FUN_100040bb4(&local_90,&DAT_100aaa288,&DAT_100836090);
            if (lVar10 == 0) {
              lVar10 = CONCAT71(uStack_12f,local_130);
              FUN_10003f030(&uStack_150,local_138);
              (**(code **)(lVar10 + 0x20))(&local_90);
              FUN_100128b30(&local_90,puVar3,&DAT_100aaa288,&DAT_100836090);
            }
            else {
              if (puVar3[3] == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x100503974);
                (*pcVar1)();
              }
              lVar10 = puVar3[4];
              FUN_1000ce034(puVar3,puVar3[3]);
              (**(code **)(lVar10 + 0x28))();
            }
            if ((char)unaff_x20[4] != '\x01') {
              puVar5 = auStack_b0;
              (*pcVar1)(puVar5,0);
              FUN_100506290();
              _swift_allocError(&DAT_1009cdf18,puVar5,0,0);
              *puVar5 = 3;
              _swift_willThrow();
              FUN_10003f094(&uStack_150);
              return;
            }
            FUN_10007f314(puVar3,&local_90,&DAT_100aaa288,&DAT_100836090);
            lVar10 = local_78;
            puVar3 = &local_90;
            FUN_100040bb4(puVar3,&DAT_100aaa288,&DAT_100836090);
            if (lVar10 == 0) {
              FUN_100506290();
              _swift_allocError(&DAT_1009cdf18,puVar3,0,0);
              *(undefined1 *)puVar3 = 5;
              _swift_willThrow();
              (*pcVar1)(auStack_b0,0);
              FUN_10003f094(&uStack_150);
              return;
            }
            uVar6 = 0;
            (*pcVar1)(auStack_b0);
            puVar3 = &uStack_150;
            FUN_10003f094();
            param_1 = local_158;
            goto LAB_100503510;
          }
        }
        puVar3 = &local_90;
        uVar6 = 0;
        FUN_100040bb4(puVar3,&DAT_100aaa280,&DAT_100835b68);
      }
LAB_100503510:
      FUN_1004fd7d4();
    }
  }
  return;
}

